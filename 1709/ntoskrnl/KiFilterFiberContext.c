/*
 * XREFs of KiFilterFiberContext @ 0x14080CBA0
 * Callers:
 *     KeInitAmd64SpecificState @ 0x1408561E0 (KeInitAmd64SpecificState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     ExInitializeNPagedLookasideList @ 0x140146350 (ExInitializeNPagedLookasideList.c)
 *     KdDisableDebugger @ 0x14015CD40 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140201630 (KdEnableDebugger.c)
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     KiSwInterruptPresent @ 0x140857940 (KiSwInterruptPresent.c)
 *     KeKeepData @ 0x140857F5C (KeKeepData.c)
 */

_BOOL8 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r12d
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rbx
  BOOL v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // r15
  char v13; // di
  unsigned __int64 v14; // rax
  unsigned __int128 v15; // rax
  int v16; // r10d
  unsigned __int64 v17; // rax
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  __int64 *v23; // rax
  __int64 v24; // rdx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+77h]
  __int64 v29; // [rsp+E8h] [rbp+7Fh]

  v2 = KdDisableDebugger();
  KeKeepData(KiFilterFiberContext);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v28 = *((_QWORD *)&v4 + 1);
  v5 = ((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) % 0xA;
  v6 = v5 < 6;
  if ( !qword_140401088 && !a1 && !__30 )
  {
    if ( PsIntegrityCheckEnabled )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0) >= 0 )
      {
        ExNotifyCallback(CallbackObject, sub_14016A6A0, &__29);
        ObfDereferenceObject(CallbackObject);
        if ( __29 )
          __30 = 1;
        ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, 0LL, 0LL, 0x200u, 0x920uLL, 0x746E494Bu, 0);
      }
    }
  }
  v7 = __rdtsc();
  v8 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
  v29 = *((_QWORD *)&v8 + 1);
  v9 = v8;
  *(_QWORD *)&v8 = __rdtsc();
  v10 = v9 ^ *((_QWORD *)&v8 + 1);
  v11 = (__ROR8__(v8, 3) ^ (unsigned __int64)v8) * (unsigned __int128)0x7010008004002001uLL;
  v12 = ((unsigned __int64)v11 ^ *((_QWORD *)&v11 + 1)) % 6;
  v13 = sub_14080DE60(v10 % 0xD, v12, v6 + 1, a1, 1);
  if ( v13 )
  {
    if ( v5 < 6 )
    {
      v14 = __rdtsc();
      v15 = (__ROR8__(v14, 3) ^ v14) * (unsigned __int128)0x7010008004002001uLL;
      v16 = ((unsigned __int64)v15 ^ *((_QWORD *)&v15 + 1)) % 0xD;
      do
      {
        v17 = __rdtsc();
        v18 = (__ROR8__(v17, 3) ^ v17) * (unsigned __int128)0x7010008004002001uLL;
        v19 = ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6;
      }
      while ( (_DWORD)v12 && (_DWORD)v19 == (_DWORD)v12 );
      v13 = sub_14080DE60(v16, v19, v6 + 1, a1, 0);
    }
    if ( v13 )
    {
      if ( !qword_140401088 && !a1 && ((int)KiSwInterruptPresent() >= 0 || __30) )
      {
        v20 = KiSwInterruptPresent();
        v21 = 8;
        if ( v20 >= 0 )
          v21 = 0;
        v13 = sub_14080DE60(0, 7, 1, 0, v21);
      }
      if ( v13 && !a1 )
      {
        if ( qword_14087C568 )
          ExFreePool(qword_14087C568);
        v22 = 24;
        v23 = &__2a;
        v24 = 3LL;
        do
        {
          *v23 = 0LL;
          v22 -= 8;
          ++v23;
          --v24;
        }
        while ( v24 );
        for ( ; v22; --v22 )
        {
          *(_BYTE *)v23 = 0;
          v23 = (__int64 *)((char *)v23 + 1);
        }
        __22 = 0;
        qword_14087C080 = 0LL;
      }
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v13 != 0;
}
