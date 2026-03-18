/*
 * XREFs of PopBcdSetupResumeObject @ 0x14060A480
 * Callers:
 *     PopBcdSetPendingResume @ 0x1405ECAD4 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140607868 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(void *a1)
{
  unsigned int v2; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = IoArcBootDeviceName.Length + 22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x64634250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    *v4 = 2;
    memmove(v4 + 5, IoArcBootDeviceName.Buffer, IoArcBootDeviceName.Length);
    v6 = BcdSetElementDataWithFlags(a1, 0x21000001u, v5, (__int64)v4, v2);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
      v6 = BcdSetElementDataWithFlags(
             a1,
             0x22000002u,
             v7,
             (__int64)DestinationString.Buffer,
             (unsigned int)DestinationString.Length + 2);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
