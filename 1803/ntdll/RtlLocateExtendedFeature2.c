/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x1800EE290
 * Callers:
 *     RtlLocateExtendedFeature @ 0x1800EE270 (RtlLocateExtendedFeature.c)
 * Callees:
 *     sub_1800EE9AC @ 0x1800EE9AC (sub_1800EE9AC.c)
 */

__int64 __fastcall RtlLocateExtendedFeature2(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // r10

  v4 = a2;
  if ( a2 - 2 <= 0x3D && ((1LL << a2) & *(_QWORD *)a3) != 0 )
  {
    v6 = *(_DWORD *)(a3 + 20);
    if ( (v6 & 0xFFFFFFFC) == 0 )
    {
      v7 = sub_1800EE9AC(a1);
      v10 = v7;
      if ( a4 )
      {
        *a4 = *(_DWORD *)(v8 + 8 * v4 + 28);
        v6 = *(_DWORD *)(v8 + 20);
      }
      v11 = 2;
      if ( (v6 & 2) == 0 )
      {
        v14 = *(unsigned int *)(v8 + 8 * v4 + 24);
        return v10 + v14 - 512;
      }
      v12 = *(_QWORD *)(v7 + 8);
      if ( (v9 & v12) != 0 )
      {
        v13 = *(_QWORD *)(v8 + 544);
        v14 = 576LL;
        if ( (unsigned int)v4 > 2 )
        {
          v15 = (_DWORD *)(v8 + 44);
          do
          {
            if ( ((1LL << v11) & v12) != 0 )
            {
              if ( ((1LL << v11) & v13) != 0 )
                LODWORD(v14) = (v14 + 63) & 0xFFFFFFC0;
              v14 = (unsigned int)(*v15 + v14);
            }
            ++v11;
            v15 += 2;
          }
          while ( v11 < (unsigned int)v4 );
        }
        if ( (v9 & v13) != 0 )
          v14 = ((_DWORD)v14 + 63) & 0xFFFFFFC0;
        return v10 + v14 - 512;
      }
    }
  }
  return 0LL;
}
