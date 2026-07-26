/*
 * XREFs of ndisIovInvalidateBlockCompletion @ 0x1C00EF850
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisIovInvalidateBlockCompletion(__int64 a1, _IRP *a2, __int64 a3)
{
  void *v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v7; // rax
  _BYTE v9[248]; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+130h] [rbp+30h] BYREF
  __int64 v11; // [rsp+138h] [rbp+38h]

  if ( a2->IoStatus.Status < 0 || *(_BYTE *)(a3 + 4706) )
  {
    KeSetEvent((PRKEVENT)(a3 + 4680), 0, 0);
  }
  else
  {
    v5 = (void *)(a3 + 4672);
    v11 = *(_QWORD *)(a3 + 4672);
    memset(v9, 0, sizeof(v9));
    *(_DWORD *)&v9[88] |= 8u;
    *(_DWORD *)&v9[8] = 0;
    *(_DWORD *)&v9[56] = 0;
    *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
    *(_DWORD *)v9 = 15466902;
    *(_QWORD *)&v9[40] = &v10;
    *(_DWORD *)&v9[48] = 16;
    *(_DWORD *)&v9[52] = 16;
    *(_DWORD *)&v9[4] = 12;
    *(_DWORD *)&v9[32] = 66153;
    ndisQuerySetMiniport((void *)a3, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
    IoReuseIrp(a2, -1073741637);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a3 + 3864);
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2801671;
    CurrentStackLocation[-1].Parameters.Read.Length = 8;
    v7 = a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = -1073741637;
    a2->UserBuffer = v5;
    v7[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&ndisIovInvalidateBlockCompletion;
    v7[-1].Context = (void *)a3;
    v7[-1].Control = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3864), a2);
  }
  return 3221225494LL;
}
