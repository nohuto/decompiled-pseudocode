/*
 * XREFs of RtlCopyContext @ 0x14078AE74
 * Callers:
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140563880 (PspWow64GetContextThread.c)
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 *     PspSetContextState @ 0x140780B40 (PspSetContextState.c)
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x1400BB6C8 (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x140131930 (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x140131FA8 (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x14014B224 (RtlpCopyXStateChunk.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // edx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // esi
  int v14; // esi
  unsigned int v15; // ebx
  int v16; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation(a1, a2);
    v10 = (int *)RtlpGetContextFlagsLocation(a3, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(a2 | *v10 | (unsigned int)*v11, 0LL);
    if ( (int)result >= 0 )
    {
      v14 = a2 & v13;
      result = RtlpValidateContextFlags(v14, &v16);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v18);
        v15 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v18 & v16) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(1, a1, v14, a3);
            *ContextFlagsLocation |= v12;
            if ( (v18 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                if ( (v12 & 0x10020) != 65568 && (v14 & 0x10020) == 65568 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            if ( (v16 & 2) == 0 )
              return v15;
            result = RtlpCopyXStateChunk(1, v6, v6, v7, v7);
            v15 = result;
            if ( (int)result >= 0 )
              return v15;
          }
        }
      }
    }
  }
  return result;
}
