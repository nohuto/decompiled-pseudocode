/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140547C00
 * Callers:
 *     NtQueryInformationAtom @ 0x140547A60 (NtQueryInformationAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlpLookupLowBox @ 0x1400A1320 (RtlpLookupLowBox.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x14018DB30 (_snwprintf_s.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  struct _KTHREAD *CurrentThread; // rax
  _EX_PUSH_LOCK *p_PushLock; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  _HANDLE_TABLE *ExHandleTable; // rsi
  signed __int64 *v16; // rbx
  signed __int64 v17; // r8
  unsigned __int64 v18; // rsi
  _HANDLE_TABLE *v19; // rax
  unsigned int v20; // edi
  PULONG v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // r15d
  ULONG v24; // eax
  signed __int32 v26[8]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-B8h]
  NTSTATUS v28; // [rsp+30h] [rbp-A8h]
  unsigned int v29; // [rsp+34h] [rbp-A4h]
  __int64 v30; // [rsp+38h] [rbp-A0h]
  PULONG v31; // [rsp+40h] [rbp-98h]
  unsigned __int64 v32; // [rsp+48h] [rbp-90h]
  PULONG v33; // [rsp+50h] [rbp-88h]
  PULONG v34; // [rsp+58h] [rbp-80h]
  _EX_PUSH_LOCK *v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+68h] [rbp-70h]
  wchar_t DstBuf[16]; // [rsp+78h] [rbp-60h] BYREF

  v33 = PinCount;
  v31 = RefCount;
  v34 = NameLength;
  if ( !AtomTable || AtomTable->Signature != 1836020801 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_PushLock = &AtomTable->PushLock;
  v35 = &AtomTable->PushLock;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AtomTable->PushLock, 0LL);
  if ( Atom >= 0xC000u )
  {
    v28 = -1073741816;
    v30 = 4 * (Atom & 0x3FFFu);
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExHandleTable = AtomTable->ExHandleTable;
    v36 = v30;
    if ( (_BYTE)Atom && (v16 = (signed __int64 *)ExpLookupHandleTableEntry(ExHandleTable, v30)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v16);
          v17 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v17 )
            goto LABEL_26;
          ExpBlockOnLockedHandleEntry(ExHandleTable, v16, v17);
        }
      }
      while ( v17 != _InterlockedCompareExchange64(v16, v17 - 1, v17) );
      v18 = (*v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v19 = AtomTable->ExHandleTable;
      _InterlockedExchangeAdd64(v16, 1uLL);
      _InterlockedOr(v26, 0);
      if ( v19->HandleContentionEvent.Value )
        ExfUnblockPushLock((volatile __int64 *)&v19->HandleContentionEvent, 0LL);
      v32 = v18;
    }
    else
    {
LABEL_26:
      v18 = 0LL;
      v32 = 0LL;
    }
    KeLeaveCriticalRegion();
    if ( !v18 )
      goto LABEL_44;
    if ( *(_WORD *)(v18 + 10) != Atom )
      goto LABEL_44;
    if ( !RtlpLookupLowBox((__int64)AtomTable, v18, 0) )
      goto LABEL_44;
    v28 = 0;
    v11 = (__int64)v31;
    if ( v31 )
      *v31 = *(unsigned __int16 *)(v18 + 36);
    if ( v33 )
      *v33 = *(unsigned __int16 *)(v18 + 38);
    if ( !AtomName )
      goto LABEL_44;
    v20 = 2 * *(unsigned __int8 *)(v18 + 40);
    v29 = v20;
    v21 = v34;
    v22 = *v34;
    if ( v20 >= *v34 )
    {
      if ( v22 < 2 )
      {
        *v34 = v20;
LABEL_43:
        v28 = -1073741789;
        goto LABEL_44;
      }
      v20 = v22 - 2;
      v29 = v22 - 2;
    }
    if ( v20 )
    {
      memmove(AtomName, (const void *)(v18 + 42), v20);
      AtomName[(unsigned __int64)v20 >> 1] = 0;
      *v21 = v20;
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  if ( !Atom )
  {
    v28 = -1073741811;
    goto LABEL_44;
  }
  v28 = 0;
  v11 = (__int64)v31;
  if ( v31 )
    *v31 = 1;
  if ( PinCount )
    *PinCount = 1;
  if ( !AtomName )
    goto LABEL_44;
  LODWORD(v27) = Atom;
  v23 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v27);
  v29 = v23;
  v24 = *NameLength;
  if ( v23 >= *NameLength )
  {
    if ( v24 < 2 )
      goto LABEL_40;
    v23 = v24 - 2;
    v29 = v24 - 2;
  }
  if ( !v23 )
  {
LABEL_40:
    v28 = -1073741789;
    goto LABEL_44;
  }
  memmove(AtomName, DstBuf, v23);
  AtomName[(unsigned __int64)v23 >> 1] = 0;
  *NameLength = v23;
LABEL_44:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_PushLock, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)p_PushLock);
  KeLeaveCriticalRegion();
  return v28;
}
