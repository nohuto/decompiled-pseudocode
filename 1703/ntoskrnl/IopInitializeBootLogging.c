/*
 * XREFs of IopInitializeBootLogging @ 0x140689284
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlFindMessage @ 0x140429F70 (RtlFindMessage.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405A3744 (RtlCreateUnicodeStringFromAsciiz.c)
 */

void __fastcall IopInitializeBootLogging(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // rax
  UNICODE_STRING *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  wchar_t *Buffer; // rax
  UNICODE_STRING *v11; // r8
  unsigned __int16 Length; // ax
  unsigned __int64 v13; // rcx
  wchar_t *v14; // rax
  PVOID *i; // rbx
  ANSI_STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+70h] [rbp+30h] BYREF

  if ( !qword_1407AC020 )
  {
    v4 = (UNICODE_STRING *)(ViVerifierDriverAddedThunkListHead
                          ? ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              0xB0uLL,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                          : ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x20206F49u));
    qword_1407AC020 = v4;
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, 0xB0uLL);
      ExInitializeResourceLite((PERESOURCE)&v5[4]);
      ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1407AC020[4], 1u);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = -1LL;
      if ( RtlFindMessage(*(PVOID *)(v6 + 48), 0xBu, 0, 0xB5u, &MessageResourceEntry) >= 0 )
      {
        v8 = -1LL;
        SourceString.Buffer = (char *)MessageResourceEntry->Text;
        do
          ++v8;
        while ( MessageResourceEntry->Text[v8] );
        SourceString.Length = v8;
        SourceString.MaximumLength = v8 + 1;
        RtlAnsiStringToUnicodeString(qword_1407AC020, &SourceString, 1u);
        if ( qword_1407AC020->Length > 4u )
        {
          v9 = (unsigned __int16)(qword_1407AC020->Length - 4);
          Buffer = qword_1407AC020->Buffer;
          qword_1407AC020->Length = v9;
          Buffer[v9 >> 1] = 0;
        }
      }
      if ( RtlFindMessage(*(PVOID *)(v6 + 48), 0xBu, 0, 0xB6u, &MessageResourceEntry) < 0 )
      {
        v11 = qword_1407AC020;
      }
      else
      {
        SourceString.Buffer = (char *)MessageResourceEntry->Text;
        do
          ++v7;
        while ( MessageResourceEntry->Text[v7] );
        SourceString.Length = v7;
        SourceString.MaximumLength = v7 + 1;
        RtlAnsiStringToUnicodeString(qword_1407AC020 + 1, &SourceString, 1u);
        v11 = qword_1407AC020;
        Length = qword_1407AC020[1].Length;
        if ( Length > 4u )
        {
          v13 = (unsigned __int16)(Length - 4);
          v14 = qword_1407AC020[1].Buffer;
          qword_1407AC020[1].Length = v13;
          v14[v13 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v11 + 3, (PCSZ)(a2 + 1));
      ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
        IopBootLog((PCUNICODE_STRING)(i + 9), 1);
      ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
      ExReleaseResourceLite((PERESOURCE)&qword_1407AC020[4]);
    }
  }
}
