/*
 * XREFs of NtGetMUIRegistryInfo @ 0x140568580
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MUIBugCheck @ 0x14025EEF0 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14025EF18 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v5; // r14
  __int64 v6; // rax
  ULONG v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bl
  NTSTATUS v10; // esi
  int v12; // eax
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  struct _KEVENT *p_Event; // [rsp+58h] [rbp-A0h] BYREF
  void *v15; // [rsp+60h] [rbp-98h]
  __int64 v16; // [rsp+68h] [rbp-90h]
  int v17; // [rsp+70h] [rbp-88h]
  int v18; // [rsp+74h] [rbp-84h]
  int v19; // [rsp+78h] [rbp-80h]
  int v20; // [rsp+7Ch] [rbp-7Ch]
  int v21; // [rsp+80h] [rbp-78h]
  HANDLE Handle; // [rsp+88h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-40h]
  int v26; // [rsp+C0h] [rbp-38h]
  __int128 v27; // [rsp+C8h] [rbp-30h]
  char v28; // [rsp+118h] [rbp+20h]

  v28 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_47;
  if ( DataSize )
  {
    v5 = 0x7FFFFFFF0000LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
      v6 = (__int64)DataSize;
    Length = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      if ( !Data )
        goto LABEL_48;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_48;
    Length = 0;
    v5 = 0x7FFFFFFF0000LL;
  }
  if ( Data )
    goto LABEL_48;
LABEL_11:
  v7 = 1;
  if ( Flags )
    v7 = Flags;
  if ( (v7 & 0xFFFFFFF4) != 0 )
    goto LABEL_48;
  if ( !MUIRegistryLock )
  {
    v10 = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
      goto LABEL_26;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v28 = 1;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v7 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_46:
      v10 = 0;
      goto LABEL_26;
    }
LABEL_47:
    v10 = -1073741823;
    goto LABEL_26;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( MUIRegistryInfo )
      {
        ExFreePoolWithTag(MUIRegistryInfo, 0);
        MUIRegistryInfo = 0LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        if ( (v7 & 8) != 0 )
          ++MEMORY[0xFFFFF780000003A4];
      }
      goto LABEL_46;
    }
    if ( (v7 & 8) != 0 )
    {
      v12 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v12;
      goto LABEL_46;
    }
LABEL_48:
    v10 = -1073741811;
    goto LABEL_26;
  }
  v9 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_18;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  p_Event = &Event;
  v15 = 0LL;
  v16 = 0LL;
  v17 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
  v18 = 0;
  v19 = (unsigned __int16)PsMachineUILanguageId;
  v20 = 0;
  v21 = -1073741823;
  LODWORD(v24) = 48;
  *((_QWORD *)&v24 + 1) = 0LL;
  v26 = 512;
  v25 = 0LL;
  v27 = 0LL;
  v10 = PsCreateSystemThreadEx(
          (__int64)&Handle,
          0x1FFFFF,
          &v24,
          0LL,
          0LL,
          (__int64)MUIRegistrySystemRoutine,
          (__int64)&p_Event,
          0LL,
          0LL);
  if ( v10 >= 0 )
  {
    ZwClose(Handle);
    v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v10 >= 0 )
    {
      v10 = v21;
      if ( v21 < 0 )
      {
LABEL_55:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_26;
      }
      MUIRegistryInfo = v15;
      LODWORD(MUIRegistryInfoSize) = v16;
      if ( !HIDWORD(v16) )
        MUIBugCheck(32770);
      if ( !v18 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v20 )
        PsMachineUILanguageId = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
  }
  if ( v10 < 0 )
    goto LABEL_55;
LABEL_18:
  if ( Length )
  {
    if ( Length < (unsigned int)MUIRegistryInfoSize )
    {
      v10 = -1073741789;
      goto LABEL_22;
    }
    v9 = 1;
  }
  v10 = 0;
LABEL_22:
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v5 = (__int64)DataSize;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  *DataSize = MUIRegistryInfoSize;
  if ( v9 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_26:
  if ( v28 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v10;
}
