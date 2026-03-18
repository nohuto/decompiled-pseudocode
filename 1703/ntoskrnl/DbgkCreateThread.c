/*
 * XREFs of DbgkCreateThread @ 0x1404F8500
 * Callers:
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsQuerySystemDllInfo @ 0x1404499AC (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14049C278 (PspReferenceSystemDll.c)
 *     PsReferenceProcessFilePointer @ 0x1404A1CC0 (PsReferenceProcessFilePointer.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsCallImageNotifyRoutines @ 0x1404FA3F0 (PsCallImageNotifyRoutines.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x14067F610 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140681A94 (DbgkpSectionToFileHandle.c)
 */

__int64 __fastcall DbgkCreateThread(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 Count; // rax
  bool v4; // r15
  signed __int32 v5; // eax
  char v6; // r12
  __int64 result; // rax
  PIMAGE_NT_HEADERS v8; // rax
  int i; // r14d
  __int64 SystemDllInfo; // r13
  PIMAGE_NT_HEADERS v11; // rax
  unsigned __int64 v12; // rax
  void *v13; // rax
  __int16 v14; // ax
  PIMAGE_NT_HEADERS v15; // rax
  PVOID Object; // [rsp+28h] [rbp-1A0h] BYREF
  signed __int32 v17; // [rsp+30h] [rbp-198h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+38h] [rbp-190h]
  _QWORD *v19; // [rsp+40h] [rbp-188h]
  unsigned __int64 v20; // [rsp+48h] [rbp-180h]
  _BYTE v21[8]; // [rsp+50h] [rbp-178h] BYREF
  int v22; // [rsp+58h] [rbp-170h] BYREF
  PVOID Ptr; // [rsp+60h] [rbp-168h]
  int v24; // [rsp+68h] [rbp-160h]
  __int64 SizeOfImage; // [rsp+70h] [rbp-158h]
  int v26; // [rsp+78h] [rbp-150h]
  int *v27; // [rsp+88h] [rbp-140h]
  _QWORD v28[12]; // [rsp+90h] [rbp-138h] BYREF

  v19 = a1;
  v2 = (struct _EX_RUNDOWN_REF *)a1[23];
  v18 = v2;
  Count = v2[133].Count;
  v4 = 0;
  if ( Count )
  {
    v14 = *(_WORD *)(Count + 8);
    if ( v14 == 332 || v14 == 452 )
      v4 = 1;
  }
  _m_prefetchw((char *)&v2[96].Ptr + 4);
  v5 = _InterlockedOr((volatile signed __int32 *)&v2[96].Ptr + 1, 0x400001u);
  v6 = v5;
  v17 = v5;
  if ( (v5 & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
  {
    Object = 0LL;
    v27 = &v22;
    v22 = 3;
    Ptr = v2[120].Ptr;
    SizeOfImage = 0LL;
    v8 = RtlImageNtHeader(Ptr);
    if ( v8 )
      SizeOfImage = v8->OptionalHeader.SizeOfImage;
    v24 = 0;
    v26 = 0;
    PsReferenceProcessFilePointer(v2, (unsigned __int64 *)&Object);
    PsCallImageNotifyRoutines(v2[141].Count, v2[92].Count, v21, Object);
    ObfDereferenceObject(Object);
    for ( i = 0; ; ++i )
    {
      LODWORD(Object) = i;
      if ( i >= 4 )
        break;
      SystemDllInfo = PsQuerySystemDllInfo(i);
      v20 = SystemDllInfo;
      if ( SystemDllInfo
        && (i <= 0 || v4 && *(_WORD *)(SystemDllInfo + 2) == (unsigned __int16)PsWow64GetProcessMachine(v2)) )
      {
        *v27 = 0;
        LOBYTE(v22) = 3;
        Ptr = *(PVOID *)(SystemDllInfo + 24);
        SizeOfImage = 0LL;
        v11 = RtlImageNtHeader(*(PVOID *)(SystemDllInfo + 24));
        if ( v11 )
          SizeOfImage = v11->OptionalHeader.SizeOfImage;
        v24 = 0;
        v26 = 0;
        v20 = PspReferenceSystemDll((signed __int64 *)(SystemDllInfo - 16));
        v12 = MiSectionControlArea(v20);
        v13 = (void *)MiReferenceControlAreaFile(v12);
        Object = v13;
        if ( v20 )
        {
          ObFastDereferenceObject((signed __int64 *)(SystemDllInfo - 16), v20);
          v13 = Object;
        }
        PsCallImageNotifyRoutines(SystemDllInfo + 8, v2[92].Count, v21, v13);
        ObfDereferenceObject(Object);
      }
    }
  }
  result = v2[132].Count;
  if ( result )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( (a1[217] & 4) == 0 )
      {
        memset(v28, 0, 0x40uLL);
        LODWORD(v28[6]) = 0;
        v28[7] = a1[210];
        v28[0] = 0x800400018LL;
        LODWORD(v28[5]) = 1;
        DbgkpSendApiMessage(v2);
      }
    }
    else
    {
      memset(v28, 0, sizeof(v28));
      LODWORD(v28[10]) = 0;
      LODWORD(v28[6]) = 0;
      v28[7] = DbgkpSectionToFileHandle(v2[119].Count);
      v28[8] = v2[120].Count;
      v28[11] = 0LL;
      v28[9] = 0LL;
      v15 = RtlImageNtHeader(v2[120].Ptr);
      if ( v15 )
      {
        if ( v4 )
          v28[11] = v15->OptionalHeader.AddressOfEntryPoint + HIDWORD(v15->OptionalHeader.ImageBase);
        else
          v28[11] = v15->OptionalHeader.ImageBase + v15->OptionalHeader.AddressOfEntryPoint;
        v28[9] = *(_QWORD *)&v15->FileHeader.PointerToSymbolTable;
      }
      v28[0] = 0x800600038LL;
      LODWORD(v28[5]) = 2;
      DbgkpSendApiMessage(v2);
      if ( v28[7] )
        ObCloseHandle((HANDLE)v28[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 435);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages(v2, a1, 0LL);
  }
  return result;
}
