/*
 * XREFs of ExpProfileCreate @ 0x1407203E0
 * Callers:
 *     NtCreateProfile @ 0x140720A3C (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x140720B18 (NtCreateProfileEx.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140036394 (KeVerifyGroupAffinity.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpProfileCreate(
        unsigned __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8,
        unsigned __int16 a9,
        unsigned __int64 a10,
        char a11)
{
  __int128 *v15; // rbx
  __int64 result; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  char PreviousMode; // di
  __int64 v20; // rcx
  __int64 v21; // rax
  __int16 v22; // r10
  int inserted; // ebx
  _QWORD *v24; // rbx
  __int64 v25; // [rsp+20h] [rbp-1A8h]
  int v26; // [rsp+54h] [rbp-174h] BYREF
  volatile void *Address; // [rsp+58h] [rbp-170h]
  PVOID Object; // [rsp+60h] [rbp-168h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-160h]
  __int128 v30; // [rsp+70h] [rbp-158h] BYREF
  PVOID v31; // [rsp+80h] [rbp-148h] BYREF
  __int64 v32; // [rsp+88h] [rbp-140h] BYREF
  int v33; // [rsp+98h] [rbp-130h] BYREF
  char v34; // [rsp+9Ch] [rbp-12Ch]
  int v35; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-110h]
  __int64 v37; // [rsp+C0h] [rbp-108h]
  int v38; // [rsp+C8h] [rbp-100h]
  __int128 v39; // [rsp+D0h] [rbp-F8h]
  _DWORD v40[44]; // [rsp+E0h] [rbp-E8h] BYREF

  v29 = (_QWORD *)a1;
  Address = a6;
  v15 = (__int128 *)a10;
  if ( !Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v17 = a4 >> a5;
  v18 = v17 + 1;
  if ( !(a4 % (1LL << a5)) )
    v18 = v17;
  if ( v18 > (unsigned __int64)Length >> 2 )
    return 3221225507LL;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  v33 = a8;
  v26 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, int *, int *))off_14033C718[0])(1LL, 24LL, &v33, &v26) < 0
    || v26 != 24
    || !v34 )
  {
    return 3221225659LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v20 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    ProbeForWrite(Address, Length, 4u);
    if ( !a11 )
    {
      v21 = 16LL * a9;
      if ( v21 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v21 + a10 > 0x7FFFFFFF0000LL || v21 + a10 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  v40[0] = 1310721;
  memset(&v40[1], 0, 0xA4uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v30 = *v15;
    else
      v30 = *v15;
    if ( !KeVerifyGroupAffinity((__int64)&v30, 0) )
      return 3221225485LL;
    if ( LOWORD(v40[0]) <= WORD4(v30) )
      LOWORD(v40[0]) = v22 + WORD4(v30);
    *(_QWORD *)&v40[2 * WORD4(v30) + 2] |= v30;
    --a9;
    ++v15;
  }
  if ( a2 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               1024,
               (__int64)PsProcessType,
               PreviousMode,
               1716549701,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    if ( a3 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    Object = 0LL;
  }
  if ( ExIsRestrictedCaller(PreviousMode) && a4 && (a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  v35 = 48;
  v36 = 0LL;
  v38 = 32;
  v37 = 0LL;
  v39 = 0LL;
  inserted = ObCreateObjectEx(0, ExProfileObjectType, (int)&v35, PreviousMode, v25, 240, 0, 488, &v31, 0LL);
  if ( inserted < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x66507845u);
  }
  else
  {
    v24 = v31;
    *(_QWORD *)v31 = Object;
    v24[1] = a3;
    v24[2] = a4;
    v24[3] = Address;
    *((_DWORD *)v24 + 8) = Length;
    *((_DWORD *)v24 + 9) = a5;
    v24[6] = 0LL;
    *((_DWORD *)v24 + 16) = 0;
    *((_DWORD *)v24 + 17) = a8;
    KeCopyAffinityEx((__int64)(v24 + 9), (unsigned __int16 *)v40);
    inserted = ObInsertObjectEx(v24, 0LL, 1LL, 0, 0, 0LL, &v32);
    LODWORD(Address) = inserted;
    if ( inserted >= 0 )
      *v29 = v32;
  }
  return (unsigned int)inserted;
}
