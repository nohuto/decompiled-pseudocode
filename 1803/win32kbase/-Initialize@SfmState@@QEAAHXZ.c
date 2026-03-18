/*
 * XREFs of ?Initialize@SfmState@@QEAAHXZ @ 0x1C00D77DC
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SfmState::Initialize(SfmState *this)
{
  SfmTokenArray *v1; // rcx
  _QWORD *v2; // rbx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v1 = gpSfmState;
  *(_QWORD *)gpSfmState = 0LL;
  *((_DWORD *)v1 + 2) = 0;
  v2 = (_QWORD *)((char *)v1 + 24);
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 6) = (char *)v1 + 40;
  *((_QWORD *)v1 + 5) = (char *)v1 + 40;
  *((_DWORD *)v1 + 14) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent((PHANDLE)v1 + 3, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0 )
    return 1LL;
  *v2 = 0LL;
  return 0LL;
}
