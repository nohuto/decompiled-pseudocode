/*
 * XREFs of DbgkCreateThread @ 0x14053F718
 * Callers:
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsWow64GetProcessNtdllType @ 0x14045FB98 (PsWow64GetProcessNtdllType.c)
 *     PspReferenceSystemDll @ 0x14045FDA4 (PspReferenceSystemDll.c)
 *     PsCallImageNotifyRoutines @ 0x1404D2A40 (PsCallImageNotifyRoutines.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x14053D978 (PsQuerySystemDllInfo.c)
 *     PsReferenceProcessFilePointer @ 0x1405770C0 (PsReferenceProcessFilePointer.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x1406AA788 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x1406AC2E4 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1406ACD5C (DbgkpSectionToFileHandle.c)
 */

__int64 __fastcall DbgkCreateThread(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  bool v4; // r12
  signed __int32 v5; // eax
  char v6; // r13
  __int64 result; // rax
  PIMAGE_NT_HEADERS v8; // rax
  int i; // r14d
  __int64 SystemDllInfo; // rax
  __int64 v11; // r15
  PIMAGE_NT_HEADERS v12; // rax
  unsigned __int64 v13; // rax
  void *v14; // rax
  __int16 v15; // ax
  PIMAGE_NT_HEADERS v16; // rax
  PVOID Object; // [rsp+28h] [rbp-1B0h] BYREF
  signed __int32 v18; // [rsp+30h] [rbp-1A8h]
  __int64 v19; // [rsp+38h] [rbp-1A0h]
  _QWORD *v20; // [rsp+40h] [rbp-198h]
  ULONG_PTR v21; // [rsp+48h] [rbp-190h]
  _BYTE v22[8]; // [rsp+50h] [rbp-188h] BYREF
  int v23; // [rsp+58h] [rbp-180h]
  PVOID v24; // [rsp+60h] [rbp-178h]
  int v25; // [rsp+68h] [rbp-170h]
  __int64 SizeOfImage; // [rsp+70h] [rbp-168h]
  int v27; // [rsp+78h] [rbp-160h]
  _QWORD v28[12]; // [rsp+90h] [rbp-148h] BYREF

  v20 = a1;
  v2 = a1[23];
  v19 = v2;
  v3 = *(_QWORD *)(v2 + 1064);
  v4 = 0;
  if ( v3 )
  {
    v15 = *(_WORD *)(v3 + 8);
    if ( v15 == 332 || v15 == 452 )
      v4 = 1;
  }
  _m_prefetchw((const void *)(v2 + 772));
  v5 = _InterlockedOr((volatile signed __int32 *)(v2 + 772), 0x400001u);
  v6 = v5;
  v18 = v5;
  if ( (v5 & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
  {
    Object = 0LL;
    v23 = 3;
    v24 = *(PVOID *)(v2 + 960);
    SizeOfImage = 0LL;
    v8 = RtlImageNtHeader(v24);
    if ( v8 )
      SizeOfImage = v8->OptionalHeader.SizeOfImage;
    v25 = 0;
    v27 = 0;
    PsReferenceProcessFilePointer(v2, &Object);
    PsCallImageNotifyRoutines(*(unsigned __int16 **)(v2 + 1128), v2, (__int64)v22, (__int64)Object);
    ObfDereferenceObject(Object);
    for ( i = 0; ; ++i )
    {
      LODWORD(Object) = i;
      if ( i >= 6 )
        break;
      SystemDllInfo = PsQuerySystemDllInfo(i);
      v11 = SystemDllInfo;
      v21 = SystemDllInfo;
      if ( SystemDllInfo
        && (i <= 0
         || *(_WORD *)(SystemDllInfo + 2) && *(_QWORD *)(v2 + 1064) && i == (unsigned int)PsWow64GetProcessNtdllType(v2)) )
      {
        v23 = 3;
        v24 = *(PVOID *)(v11 + 24);
        SizeOfImage = 0LL;
        v12 = RtlImageNtHeader(*(PVOID *)(v11 + 24));
        if ( v12 )
          SizeOfImage = v12->OptionalHeader.SizeOfImage;
        v25 = 0;
        v27 = 0;
        v21 = PspReferenceSystemDll((signed __int64 *)(v11 - 16));
        v13 = MiSectionControlArea(v21);
        v14 = (void *)MiReferenceControlAreaFile(v13);
        Object = v14;
        if ( v21 )
        {
          ObFastDereferenceObject((signed __int64 *)(v11 - 16), v21);
          v14 = Object;
        }
        PsCallImageNotifyRoutines((unsigned __int16 *)(v11 + 8), v2, (__int64)v22, (__int64)v14);
        ObfDereferenceObject(Object);
      }
    }
  }
  result = *(_QWORD *)(v2 + 1056);
  if ( result )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( (a1[218] & 4) == 0 )
      {
        memset(v28, 0, 0x40uLL);
        LODWORD(v28[6]) = 0;
        v28[7] = a1[210];
        v28[0] = 0x800400018LL;
        LODWORD(v28[5]) = 1;
        DbgkpSendApiMessage((PVOID)v2);
      }
    }
    else
    {
      memset(v28, 0, sizeof(v28));
      LODWORD(v28[10]) = 0;
      LODWORD(v28[6]) = 0;
      v28[7] = DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 952));
      v28[8] = *(_QWORD *)(v2 + 960);
      v28[11] = 0LL;
      v28[9] = 0LL;
      v16 = RtlImageNtHeader(*(PVOID *)(v2 + 960));
      if ( v16 )
      {
        if ( v4 )
          v28[11] = v16->OptionalHeader.AddressOfEntryPoint + HIDWORD(v16->OptionalHeader.ImageBase);
        else
          v28[11] = v16->OptionalHeader.ImageBase + v16->OptionalHeader.AddressOfEntryPoint;
        v28[9] = *(_QWORD *)&v16->FileHeader.PointerToSymbolTable;
      }
      v28[0] = 0x800600038LL;
      LODWORD(v28[5]) = 2;
      DbgkpSendApiMessage((PVOID)v2);
      if ( v28[7] )
        ObCloseHandle((HANDLE)v28[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 437);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages((PVOID)v2, a1, 0LL);
  }
  return result;
}
