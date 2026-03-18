/*
 * XREFs of SendGestureMessage @ 0x1C01EF47C
 * Callers:
 *     NtUserfnGESTURE @ 0x1C01E1A70 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     AllocGestureInfo @ 0x1C01EF110 (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C01EF780 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  const void *v8; // rdi
  __int64 v9; // rcx
  volatile void *v10; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdi
  __int128 v14; // [rsp+58h] [rbp-70h]
  __int128 v15; // [rsp+68h] [rbp-60h]
  SIZE_T Length; // [rsp+78h] [rbp-50h]
  _OWORD v17[3]; // [rsp+88h] [rbp-40h] BYREF
  SIZE_T v18; // [rsp+B8h] [rbp-10h]

  v8 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a4 || !a3 || a3 > 0xFFFFFFFF || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v9 = (unsigned int)(a3 - 56);
  v10 = (volatile void *)(a4 + 56);
  if ( a4 + 56 < a4 || (unsigned __int64)v10 > W32UserProbeAddress )
    a4 = W32UserProbeAddress;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_OWORD *)(a4 + 32);
  Length = *(_QWORD *)(a4 + 48);
  v17[0] = *(_OWORD *)a4;
  v17[1] = v14;
  v17[2] = v15;
  v18 = Length;
  if ( (_DWORD)Length != (_DWORD)v9 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, a2, a3, a4);
    ProbeForRead(v10, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
    v8 = (const void *)v10;
  }
  if ( !(unsigned int)ValidateGestureInfo(v9, a2, v17) )
    return 0LL;
  v13 = AllocGestureInfo(a1, 0, (__int64)v17, v8);
  if ( !v13 )
    return 0LL;
  *a7 = _guard_dispatch_icall_fptr();
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    FreeGestureInfo(v13, 1LL);
  return 1LL;
}
