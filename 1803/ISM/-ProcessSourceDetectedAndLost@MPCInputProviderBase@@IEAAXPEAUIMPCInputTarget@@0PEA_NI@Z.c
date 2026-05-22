/*
 * XREFs of ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z @ 0x18004A03C
 * Callers:
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003B790 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800457C0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCInputTarget@@0@Z @ 0x180046C5C (-ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180048180 (-OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180048350 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@I@Z @ 0x18004A214 (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::ProcessSourceDetectedAndLost(
        MPCInputProviderBase *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3,
        bool *a4,
        unsigned int a5)
{
  struct IMPCInputTarget *v7; // r14
  bool v9; // r12
  char v10; // r13
  __int64 v11; // r8
  __int64 v12; // r8
  _DWORD *v13; // rcx
  ISMTracing *v14; // rcx

  v7 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a2 != a3 || !*((_BYTE *)this + 2200) )
  {
    v9 = a2
      && a3
      && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2)
      && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3);
    v10 = *((_BYTE *)this + 2200);
    *((_BYTE *)this + 2200) = 0;
    if ( v7 && v7 != a3 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCInputTarget *, _QWORD, char *))(*(_QWORD *)this + 88LL))(
        this,
        a2,
        a5,
        (char *)this + 464);
      LOBYTE(v11) = v9;
      (*(void (__fastcall **)(struct IMPCInputTarget *, char *, __int64))(*(_QWORD *)v7 + 48LL))(
        v7,
        (char *)this + 464,
        v11);
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCInputTarget *, _QWORD))(*(_QWORD *)this + 96LL))(
        this,
        v7,
        a5);
    }
    if ( a3 )
    {
      (*(void (__fastcall **)(MPCInputProviderBase *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 88LL))(
        this,
        0LL,
        a5,
        (char *)this + 464);
      LOBYTE(v12) = v9;
      if ( (*(int (__fastcall **)(struct IMPCInputTarget *, char *, __int64))(*(_QWORD *)a3 + 48LL))(
             a3,
             (char *)this + 464,
             v12) >= 0 )
      {
        (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCInputTarget *, _QWORD))(*(_QWORD *)this + 104LL))(
          this,
          a3,
          a5);
      }
      else
      {
        if ( a4 )
          *a4 = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3) != 0;
        if ( v10 )
        {
          v13 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
          if ( v13 )
          {
            if ( *v13 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(
                v14,
                a3,
                (MPCInputProviderBase *)((char *)this + 464),
                a5);
            }
          }
        }
      }
    }
  }
}
