/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1801E1560
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E1974 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  __int64 *v12; // rax
  const struct _GUID *v13; // rdx
  signed int StdMarshaler; // ebx
  unsigned int *v15; // r14
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v22 = 0LL;
  *a7 = 0;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v13, (void **)v12);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)v22 + 32LL))(
                     v22,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     &a7);
    if ( StdMarshaler >= 0 )
    {
      v15 = (unsigned int *)((char *)this + 24);
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (char *)this + 24);
      if ( StdMarshaler >= 0 )
      {
        v16 = *v15;
        v17 = -1;
        v18 = -1;
        v19 = *v15 + 4;
        if ( v19 >= *v15 )
          v18 = *v15 + 4;
        StdMarshaler = v19 < v16 ? 0x80070216 : 0;
        if ( v19 >= v16 )
        {
          if ( v18 + (int)a7 >= (unsigned int)a7 )
            v17 = v18 + (_DWORD)a7;
          StdMarshaler = v18 + (int)a7 < (unsigned int)a7 ? 0x80070216 : 0;
          *v7 = v17;
        }
      }
    }
  }
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)StdMarshaler;
}
