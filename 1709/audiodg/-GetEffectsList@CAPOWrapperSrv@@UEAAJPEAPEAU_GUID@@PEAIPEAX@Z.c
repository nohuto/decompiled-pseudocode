/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013260
 * Callers:
 *     ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x140013230 (-GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z.c)
 * Callees:
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013D70 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, GUID *a3, GUID *a4)
{
  char *v8; // rcx
  CSystemEffectWrapper *v9; // rcx
  __int64 (__fastcall *v10)(CSystemEffectWrapper *__hidden, struct _GUID **, unsigned int *, void *); // rax
  __int64 result; // rax
  unsigned int v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  int v17; // [rsp+6Ch] [rbp+3h]
  int *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  unsigned int *v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]

  v12 = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    result = 2147500033LL;
    v12 = -2147467263;
LABEL_12:
    if ( (unsigned int)hProvider > 2 )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = "CAPOWrapperSrv::GetEffectsList";
      v18 = &v13;
      v21 = &v12;
      v16 = 31;
      v13 = 352;
      v19 = 4;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400725B4, a3, a4, 5u, &pData);
      return v12;
    }
    return result;
  }
  if ( a4 )
  {
    v8 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v8);
      *((_QWORD *)this + 11) = 0LL;
    }
    *((_QWORD *)this + 11) = a4;
  }
  v9 = (CSystemEffectWrapper *)*((_QWORD *)this + 10);
  v10 = *(__int64 (__fastcall **)(CSystemEffectWrapper *__hidden, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v9 + 24LL);
  if ( v10 == CSystemEffectWrapper::GetEffectsList )
    result = CSystemEffectWrapper::GetEffectsList(v9, a2, &a3->Data1, a4);
  else
    result = v10(v9, a2, &a3->Data1, a4);
  v12 = result;
  if ( (int)result < 0 )
    goto LABEL_12;
  return result;
}
