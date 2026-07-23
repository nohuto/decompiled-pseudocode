/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x1406C2070
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14059F660 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(int a1, _OWORD *a2, __int64 a3)
{
  __int64 SessionById; // rax
  void *v6; // rbx
  int ExplicitScope; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-1h] BYREF
  int v10; // [rsp+4Ch] [rbp+3h] BYREF
  LOGICAL v11[2]; // [rsp+50h] [rbp+7h] BYREF
  _OWORD Buffer[3]; // [rsp+58h] [rbp+Fh] BYREF

  ExplicitScope = a1;
  memset(Buffer, 0, sizeof(Buffer));
  *(_QWORD *)v11 = 0LL;
  v10 = 0;
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 0x11u, 0, 131097, 0, (__int64)v11, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v9 = 32;
    LODWORD(SessionById) = RegRtlQueryValue(*(HANDLE *)v11, L"PortName", &v10, &Buffer[1], &v9);
    if ( (int)SessionById >= 0 )
    {
      Buffer[0] = *a2;
      if ( ExplicitScope == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = MmGetSessionById(ExplicitScope);
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(SessionById) = ObfDereferenceObject(v6);
        }
      }
    }
  }
  if ( *(_QWORD *)v11 )
    LODWORD(SessionById) = ZwClose(*(HANDLE *)v11);
  return SessionById;
}
