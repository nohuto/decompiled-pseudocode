/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180020AF0
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180030E90 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180020A00 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180020BB4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18002B0D0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18002EC04 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800BB63C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801694E0 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  __int64 v2; // rax
  bool v3; // bl
  char v6; // al
  struct CResource *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int TracingCookie; // eax
  int v12; // eax
  HANDLE EventW; // rbx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = *((_QWORD *)this + 25);
  v3 = 0;
  if ( (*(_DWORD *)(v2 + 4) & 0x40000000) != 0 || *(int *)(v2 + 4) < 0 )
    v3 = (unsigned __int8)CExpressionValue::operator==((char *)this + 64, a2) == 0;
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 64), a2);
  if ( v3 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v12 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1CEu);
      return v9;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  v6 = *((_BYTE *)this + 208);
  if ( (v6 & 2) != 0 && (v6 & 1) != 0 )
  {
    v7 = (struct CResource *)*((_QWORD *)this + 21);
    if ( v7 )
      v7 = (struct CResource *)*((_QWORD *)v7 + 1);
    if ( v7 )
    {
      v8 = CBaseExpression::SetOutputValueOnTarget(this, v7);
      v9 = v8;
      if ( v8 >= 0 )
        return 0;
      v15 = 480;
      v14 = v8;
    }
    else
    {
      v9 = -2147024890;
      v15 = 479;
      v14 = -2147024890;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
    return v9;
  }
  return 0;
}
