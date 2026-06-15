/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1400461A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(
        CAPOWrapperSrv *this,
        struct _GUID **a2,
        unsigned int *a3,
        const GUID *a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v14; // [rsp+60h] [rbp-9h]
  int v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+6Ch] [rbp+3h]
  int *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  unsigned int *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]

  v11 = 0;
  v5 = *((_QWORD *)this + 10);
  if ( !v5 )
  {
    result = 2147500033LL;
    v11 = -2147467263;
LABEL_9:
    if ( (unsigned int)hProvider > 2 )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = "CAPOWrapperSrv::GetEffectsList";
      v17 = &v12;
      v20 = &v11;
      v15 = 31;
      v12 = 344;
      v18 = 4;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140070019, 0LL, a4, 5u, &pData);
      return v11;
    }
    return result;
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)this + 11);
    if ( v10 && v10 != -1 )
    {
      CloseHandle(*((HANDLE *)this + 11));
      *((_QWORD *)this + 11) = 0LL;
      v5 = *((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 11) = a4;
  }
  result = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *, const GUID *))(*(_QWORD *)v5 + 24LL))(
             v5,
             a2,
             a3,
             a4);
  v11 = result;
  if ( (int)result < 0 )
    goto LABEL_9;
  return result;
}
