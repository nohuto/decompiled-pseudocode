/*
 * XREFs of ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x180190630
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180190BC8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetTransformedOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        struct InteractionOutput *a3)
{
  struct InteractionOutput *v3; // rdi
  __int128 v4; // xmm0
  const GUID *v7; // r9
  int v8; // eax
  __int128 v9; // xmm0
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  __int64 v12; // r10
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  CInteractionContextWrapper *v15; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  CInteractionContextWrapper **v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  char *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  char *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  char *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  v3 = (CInteractionContextWrapper *)((char *)this + 160);
  v4 = *((_OWORD *)this + 10);
  v14 = 0;
  LODWORD(v7) = 0;
  *(_OWORD *)a3 = v4;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 11);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 12);
  *((_QWORD *)a3 + 6) = *((_QWORD *)this + 26);
  *((_DWORD *)a3 + 14) = *((_DWORD *)this + 54);
  if ( *((_BYTE *)this + 156) )
  {
    v8 = CInteractionContextWrapper::TransformOutput(this, a2, (CInteractionContextWrapper *)((char *)this + 32), v3);
    v9 = *(_OWORD *)v3;
    *((_BYTE *)this + 156) = 0;
    LODWORD(v7) = v8;
    v14 = v8;
    *(_OWORD *)a3 = v9;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)v3 + 2);
    *((_QWORD *)a3 + 6) = *((_QWORD *)v3 + 6);
    *((_DWORD *)a3 + 14) = *((_DWORD *)v3 + 14);
    if ( dword_18023D7F0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v15 = this;
        v17 = &v15;
        v19 = (char *)this + 168;
        v21 = (char *)this + 172;
        v23 = (char *)this + 176;
        v25 = (char *)this + 184;
        v27 = (char *)this + 188;
        v29 = (char *)this + 192;
        v31 = (char *)this + 196;
        v33 = (char *)this + 200;
        v35 = (char *)this + 204;
        v37 = &v14;
        v18 = 8LL;
        v20 = v12;
        v22 = v12;
        v24 = v12;
        v26 = v12;
        v28 = v12;
        v30 = v12;
        v32 = v12;
        v34 = v12;
        v36 = v12;
        v38 = v12;
        TlgWrite(v10, &unk_1801F925A, v11, v7, 0xDu, &pData);
        LODWORD(v7) = v14;
      }
    }
  }
  return (unsigned int)v7;
}
