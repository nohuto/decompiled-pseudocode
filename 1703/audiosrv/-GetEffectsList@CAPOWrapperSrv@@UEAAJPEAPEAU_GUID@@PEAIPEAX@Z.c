/*
 * XREFs of ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800CE660
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsList(CAPOWrapperSrv *this, struct _GUID **a2, unsigned int *a3, void *a4)
{
  __int64 result; // rax
  char *v9; // rcx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-49h] BYREF
  int v13; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  unsigned int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]

  v12 = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    result = 2147500033LL;
    v12 = -2147467263;
LABEL_8:
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperSrv::GetEffectsList");
      v18 = 0;
      v21 = 0;
      v16 = &v13;
      v19 = &v12;
      v13 = 352;
      v17 = 4;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v10, v11, 5u, &pData);
      return v12;
    }
    return result;
  }
  if ( a4 )
  {
    v9 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v9);
      *((_QWORD *)this + 11) = 0LL;
    }
    *((_QWORD *)this + 11) = a4;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(**((_QWORD **)this + 10) + 24LL))(
             *((_QWORD *)this + 10),
             a2,
             a3,
             a4);
  v12 = result;
  if ( (int)result < 0 )
    goto LABEL_8;
  return result;
}
