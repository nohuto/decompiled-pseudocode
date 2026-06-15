/*
 * XREFs of ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x140044614
 * Callers:
 *     ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x1400449B0 (-Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // r8
  char *v11; // rdx

  v5 = (void *)_o__recalloc(CVpoContext::s_mapVpoContext, (int)qword_1400862C0 + 1, 4LL);
  if ( !v5 )
    return 0LL;
  CVpoContext::s_mapVpoContext = v5;
  v7 = (char *)_o__recalloc(qword_1400862B8, (int)qword_1400862C0 + 1, 8LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = (int)qword_1400862C0;
  qword_1400862B8 = v7;
  v10 = (char *)CVpoContext::s_mapVpoContext + 4 * (int)qword_1400862C0;
  if ( v10 )
  {
    *v10 = *a2;
    v8 = (char *)qword_1400862B8;
  }
  v11 = &v8[8 * v9];
  if ( v11 )
    *(_QWORD *)v11 = *a3;
  result = 1LL;
  LODWORD(qword_1400862C0) = qword_1400862C0 + 1;
  return result;
}
