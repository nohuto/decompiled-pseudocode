/*
 * XREFs of NtDCompositionDuplicateHandleToProcess @ 0x1C013EDC0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0010088 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall NtDCompositionDuplicateHandleToProcess(char *a1, int a2, __int64 a3)
{
  void *v4; // r14
  int v6; // edi
  __int64 v7; // r8
  int ProcessInformation; // [rsp+40h] [rbp-128h] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-120h] BYREF
  PVOID v11; // [rsp+50h] [rbp-118h] BYREF
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  PVOID v13; // [rsp+60h] [rbp-108h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-100h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter1[16]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = (void *)a2;
  v6 = -1073741790;
  if ( !UserIsCurrentProcessDwm() )
    return (unsigned int)v6;
  if ( (_DWORD)v4 != -1414746709 || a3 )
  {
    LOBYTE(v7) = 1;
    v6 = DirectComposition::ResourceObject::ResolveHandle(
           a1,
           1LL,
           v7,
           (struct DirectComposition::ResourceObject **)&v13);
    if ( v6 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v4;
      v6 = ZwOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
      if ( v6 >= 0 )
      {
        v6 = ZwQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
        if ( v6 >= 0 && (unsigned int)PsGetCurrentProcessSessionId() != ProcessInformation )
          v6 = -1073741790;
        if ( v6 >= 0 )
        {
          v6 = ObReferenceObjectByHandleWithTag(ProcessHandle, 0x40u, 0LL, 0, 0, &Object, 0LL);
          if ( v6 >= 0 )
          {
            v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &v11, 0LL);
            if ( v6 >= 0 )
            {
              v6 = ObDuplicateObject(v11, a1, Object, a3, 0x80000000, 0, 2, 1);
              ObfDereferenceObjectWithTag(v11, 0);
            }
            ObfDereferenceObjectWithTag(Object, 0);
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
      ObfDereferenceObject(v13);
    }
    return (unsigned int)v6;
  }
  if ( !PsGetVersion(0LL, 0LL, 0LL, 0LL) )
  {
    memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
    if ( a1 )
    {
      if ( a1 + 128 < a1 || (unsigned __int64)(a1 + 128) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)BugCheckParameter1 = *(_OWORD *)a1;
      *(_OWORD *)&BugCheckParameter1[2] = *((_OWORD *)a1 + 1);
      *(_OWORD *)&BugCheckParameter1[4] = *((_OWORD *)a1 + 2);
      *(_OWORD *)&BugCheckParameter1[6] = *((_OWORD *)a1 + 3);
      *(_OWORD *)&BugCheckParameter1[8] = *((_OWORD *)a1 + 4);
      *(_OWORD *)&BugCheckParameter1[10] = *((_OWORD *)a1 + 5);
      *(_OWORD *)&BugCheckParameter1[12] = *((_OWORD *)a1 + 6);
      *(_OWORD *)&BugCheckParameter1[14] = *((_OWORD *)a1 + 7);
    }
    KeBugCheckEx(0xC0000017, (ULONG_PTR)BugCheckParameter1, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
