/*
 * XREFs of ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01558C0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DISPLAY_SOURCE::Initialize(DISPLAY_SOURCE *this, struct ADAPTER_DISPLAY *a2, int a3)
{
  NTSTATUS result; // eax
  HANDLE v5; // rcx
  struct _OBJECT_ATTRIBUTES v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v6.RootDirectory = 0LL;
  v6.ObjectName = 0LL;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 188) = a3;
  *((_DWORD *)this + 200) = a3;
  *((_DWORD *)this + 210) = a3;
  v6.Length = 48;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  v6.Attributes = 512;
  result = ZwCreateEvent(&Handle, 0x1F0003u, &v6, NotificationEvent, 0);
  if ( result >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = Handle;
    *((_QWORD *)this + 117) = Object;
    ZwClose(v5);
    return 0;
  }
  return result;
}
