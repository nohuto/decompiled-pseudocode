/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180020A00
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180020AF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x18001C618 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180020BB4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800D5390 (memcmp_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1801339E0 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this, struct CResource *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v10; // eax
  __int64 v11; // r9
  int v12; // eax
  size_t ValueSizeInBytes; // rax
  int v14; // eax
  _BYTE Buf2[64]; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v16; // [rsp+70h] [rbp-19h]
  char v17; // [rsp+74h] [rbp-15h]
  int Buf1; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v19[60]; // [rsp+84h] [rbp-5h] BYREF

  memset_0(Buf2, 0, sizeof(Buf2));
  v4 = *(_QWORD *)a2;
  v5 = *((unsigned int *)this + 44);
  v16 = 18;
  v17 = 0;
  v6 = (*(__int64 (__fastcall **)(struct CResource *, __int64, _BYTE *))(v4 + 88))(a2, v5, Buf2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1FBu);
    return v7;
  }
  v8 = *((_QWORD *)this + 23);
  if ( v8 && *(_BYTE *)(v8 + 4) )
  {
    Buf1 = 0;
    memset_0(v19, 0, sizeof(v19));
    v12 = CBaseExpression::MergeValueWithMask(
            (const struct CExpressionValue *)Buf2,
            (CBaseExpression *)((char *)this + 64),
            (const struct SubchannelMaskInfo *)v8,
            v11,
            (float *)&Buf1);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x20Du);
      return v7;
    }
    ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes((CExpressionValue *)Buf2);
    if ( memcmp_0(&Buf1, Buf2, ValueSizeInBytes) )
    {
      v14 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, int *))(*(_QWORD *)a2 + 80LL))(
              a2,
              *((unsigned int *)this + 44),
              v16,
              &Buf1);
      v7 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x211u);
        return v7;
      }
    }
  }
  else if ( !(unsigned __int8)CExpressionValue::operator==(Buf2, (char *)this + 64)
         || (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 184LL))(this) )
  {
    v10 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 80LL))(
            a2,
            *((unsigned int *)this + 44),
            *((unsigned int *)this + 34),
            (char *)this + 64);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x202u);
      return v7;
    }
  }
  return 0;
}
