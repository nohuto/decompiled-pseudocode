/*
 * XREFs of ?WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAX_KPEAG@Z @ 0x18020858C
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180208344 (-StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 */

void __fastcall VectorSubchannelMaskInfo::WriteSubchannelString(
        VectorSubchannelMaskInfo *this,
        __int64 a2,
        unsigned __int16 *a3)
{
  unsigned __int8 v3; // dl
  int v4; // ebx
  size_t v5; // r11
  unsigned __int16 *v6; // r10
  char v8; // cl
  int v9; // edx
  int v10; // edx
  int v11; // edx
  const unsigned __int16 *v12; // r8
  int v13; // eax
  unsigned __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v3 = *((_BYTE *)this + 4);
  v4 = 0;
  v5 = 49LL;
  v6 = a3;
  v14[0] = 49LL;
  if ( v3 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (*((unsigned __int8 *)this + 8) >> (2 * (v3 - v8) - 2)) & 3;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
            v12 = v11 == 1 ? L"W" : 0LL;
          else
            v12 = L"Z";
        }
        else
        {
          v12 = L"Y";
        }
      }
      else
      {
        v12 = L"X";
      }
      v13 = StringCchCatExW(v6, v5, v12, &v16, v14);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT(v13, retaddr);
      v8 = ++v4;
      v3 = *((_BYTE *)this + 4);
      if ( v4 >= v3 )
        break;
      v6 = v16;
      v5 = v14[0];
    }
  }
}
