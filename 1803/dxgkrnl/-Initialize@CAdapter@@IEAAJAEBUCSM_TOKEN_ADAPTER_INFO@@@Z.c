/*
 * XREFs of ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0014244
 * Callers:
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x1C000B540 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C001C1E4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C00D8E88 (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00DC300 (DxgkGetPresentHistoryReadyEvent.c)
 */

__int64 __fastcall CAdapter::Initialize(CAdapter *this, const struct CSM_TOKEN_ADAPTER_INFO *a2)
{
  _QWORD *v4; // r9
  NTSTATUS updated; // ebx
  void *v6; // rdx
  unsigned int v7; // ecx
  void **Handle; // rax
  PVOID v9; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]

  *((_QWORD *)this + 3) = *(_QWORD *)a2;
  v4 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v12 = 0;
  v4[1] = v4;
  *v4 = v4;
  Object = (PVOID)*((_QWORD *)this + 3);
  updated = DxgkOpenAdapterFromLuidInternal(&Object);
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 8) = v12;
    v6 = (void *)*((_QWORD *)a2 + 1);
    if ( v6 )
      updated = CAdapter::UpdateRenderFence(this, v6);
    if ( updated >= 0 )
    {
      v7 = *((_DWORD *)this + 8);
      Object = 0LL;
      updated = DxgkGetPresentHistoryReadyEvent(v7);
      if ( updated >= 0 )
      {
        Handle = (void **)((char *)this + 40);
        v9 = Object;
        updated = ObOpenObjectByPointer(Object, 0x80u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, Handle);
        if ( v9 )
          ObfDereferenceObject(v9);
      }
    }
  }
  return (unsigned int)updated;
}
