/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140015440
 * Callers:
 *     ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x1400153A0 (-GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z.c)
 * Callees:
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140015F00 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3, void *a4)
{
  CSystemEffectWrapper *v8; // rcx
  __int64 (__fastcall *v9)(CSystemEffectWrapper *__hidden, struct _GUID **, unsigned int *, void *); // rax
  __int64 result; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char *v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  int v15; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+3h]
  unsigned int *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]

  v14 = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    result = 2147500033LL;
    v14 = -2147467263;
LABEL_9:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::GetEffectsList");
      v20 = 0;
      v23 = 0;
      v18 = &v15;
      v21 = &v14;
      v15 = 352;
      v19 = 4;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14006F553, v11, v12, 5u, &pData);
      return v14;
    }
    return result;
  }
  if ( a4 )
  {
    v13 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v13);
      *((_QWORD *)this + 11) = 0LL;
    }
    *((_QWORD *)this + 11) = a4;
  }
  v8 = (CSystemEffectWrapper *)*((_QWORD *)this + 10);
  v9 = *(__int64 (__fastcall **)(CSystemEffectWrapper *__hidden, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v8 + 24LL);
  if ( v9 == CSystemEffectWrapper::GetEffectsList )
    result = CSystemEffectWrapper::GetEffectsList(v8, a2, a3, a4);
  else
    result = v9(v8, a2, a3, a4);
  v14 = result;
  if ( (int)result < 0 )
    goto LABEL_9;
  return result;
}
