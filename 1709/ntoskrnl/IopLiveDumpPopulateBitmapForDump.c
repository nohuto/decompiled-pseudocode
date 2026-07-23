/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x14042BF00
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021B580 (MmRemoveSystemCacheFromDump.c)
 *     RtlFindNextForwardRunClearEx @ 0x140252A10 (RtlFindNextForwardRunClearEx.c)
 *     RtlFindSetBitsEx @ 0x140252DC0 (RtlFindSetBitsEx.c)
 */

void __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // rsi
  _RTL_BITMAP_EX *v4; // r14
  ULONG64 SetBits; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG64 v15; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 v16; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 NextForwardRunClear; // [rsp+C0h] [rbp+58h]
  ULONG64 v18; // [rsp+C8h] [rbp+60h]

  v1 = a1 + 368;
  v2 = *(_QWORD *)(a1 + 368);
  v18 = v2;
  memset(&BugCheckParameter2[1], 0, 0x28uLL);
  BugCheckParameter2[4] = 0LL;
  BugCheckParameter2[0] = 0LL;
  LODWORD(BugCheckParameter2[5]) |= 1u;
  BugCheckParameter2[1] = (ULONG_PTR)IoFreeDumpRange;
  BugCheckParameter2[2] = a1 + 424;
  MmRemoveSystemCacheFromDump((ULONG_PTR)BugCheckParameter2);
  v4 = (_RTL_BITMAP_EX *)(a1 + 424);
  if ( a1 != -424 )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v4, 1uLL, 0LL);
      if ( SetBits != -1LL )
      {
        do
        {
          NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v4, SetBits, &v16);
          if ( NextForwardRunClear )
            v2 = v16;
          v6 = v2 - SetBits;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v1, SetBits, v6);
          }
          else
          {
            v7 = *(_QWORD *)(a1 + 376);
            v13[0] = v6 + SetBits;
            v8 = SetBits;
            v13[1] = v7;
            v15 = SetBits;
            do
            {
              v9 = RtlFindNextForwardRunClearEx((__int64)v13, v8, &v15);
              if ( !v9 )
                break;
              v10 = *(_QWORD *)(a1 + 496);
              if ( v9 > v10 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v9 = v10;
              }
              v11 = v15;
              if ( v9 )
              {
                RtlSetBitsEx((__int64)v13, v15, v9);
                *(_QWORD *)(a1 + 496) -= v9;
              }
              if ( (*(_DWORD *)(a1 + 80) & 2) != 0 )
                return;
              v8 = v9 + v11;
              v15 = v8;
            }
            while ( v8 < v6 + SetBits );
            v1 = a1 + 368;
          }
          v12 = v6 + NextForwardRunClear;
          v2 = v18;
          SetBits += v12;
        }
        while ( SetBits < v18 );
      }
      if ( v4 == (_RTL_BITMAP_EX *)(a1 + 424) && (*(_DWORD *)(a1 + 40) & 4) != 0 )
        v4 = (_RTL_BITMAP_EX *)(a1 + 464);
      else
        v4 = 0LL;
    }
    while ( v4 );
  }
}
