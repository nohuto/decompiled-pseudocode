/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A5060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180173C30 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_S.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001EA4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180092EB0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18011CCE8 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801584FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v3; // bl
  int v5; // ecx
  char v6; // al
  struct CResource *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int TracingCookie; // eax
  signed int v12; // eax
  HANDLE EventW; // rbx
  DWORD v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL);
  if ( (v5 & 0x40000000) != 0 || v5 < 0 )
    v3 = (unsigned __int8)CExpressionValue::operator==((char *)this + 64) == 0;
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 64), a2);
  if ( v3 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v12 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1F5u);
      return v9;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  v6 = *((_BYTE *)this + 192);
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
      v15 = 519;
      v14 = v8;
    }
    else
    {
      v9 = -2147024890;
      v15 = 518;
      v14 = -2147024890;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v15);
    return v9;
  }
  return 0;
}
