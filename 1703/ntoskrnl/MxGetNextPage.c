/*
 * XREFs of MxGetNextPage @ 0x14080182C
 * Callers:
 *     MxMapVa @ 0x1408015E0 (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x140801AD8 (MxBootDescriptorDepleted.c)
 *     MxSwitchDescriptors @ 0x140835120 (MxSwitchDescriptors.c)
 */

__int64 __fastcall MxGetNextPage(unsigned int a1, int a2)
{
  unsigned int v2; // r10d
  unsigned int v5; // r9d
  __int64 *v6; // r8
  __int64 v8; // r9
  __int64 v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = 0;
  v5 = a1;
  do
  {
    v6 = (__int64 *)MxFreeDescriptor[v5];
    if ( v6 && v6[1] && !(a2 == 1 ? v6[3] == -1 : v6[2] == -1) )
      break;
    v11 = v5 + 1;
    v5 = 0;
    ++v2;
    if ( v11 != (unsigned __int16)KeNumberNodes )
      v5 = v11;
  }
  while ( v2 < (unsigned __int16)KeNumberNodes );
  if ( v2 != (unsigned __int16)KeNumberNodes )
  {
LABEL_8:
    if ( a2 == 1 )
    {
      v8 = v6[3];
      if ( (unsigned __int64)(v8 - *v6) >= 0x200 )
      {
        v6[3] = v8 - 512;
        return v8;
      }
    }
    else
    {
      v10 = v6[2];
      if ( v10 != (v10 & 0xFFFFFFFFFFFFFE00uLL) && v10 != *v6 )
      {
        v6[2] = v10 - 1;
LABEL_16:
        MxBootDescriptorDepleted(v6);
        return v8;
      }
      v12 = v6[3];
      if ( v12 == -1 )
      {
        v13 = *v6;
        if ( v10 == *v6 || v13 == (v13 & 0xFFFFFFFFFFFFFE00uLL) )
          v6[2] = -1LL;
        else
          v6[2] = v13 | 0x1FF;
        goto LABEL_16;
      }
      v6[2] = v12 + 511;
      if ( (unsigned __int64)(v12 - *v6) >= 0x200 )
      {
        v6[3] = v12 - 512;
        goto LABEL_16;
      }
    }
    v6[3] = -1LL;
    goto LABEL_16;
  }
  if ( a2 != 1 )
  {
    v6 = (__int64 *)MxSwitchDescriptors(a1);
    if ( v6 )
      goto LABEL_8;
    byte_14036CA3D = 16;
  }
  return -1LL;
}
