/*
 * XREFs of ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180073F00
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180076FC8 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rbx
  LPVOID Value; // rbx
  _QWORD *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CCommonRenderingEffect *)((char *)this + 64);
  v5 = 2LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 24);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v8 = operator new(0xF8uLL);
        Value = v8;
        if ( v8 )
        {
          *v8 = 0LL;
          v8[1] = 0LL;
          v8[2] = 0LL;
          v8[3] = 0LL;
          v8[4] = 0LL;
          v8[5] = 0LL;
          v8[6] = 0LL;
          v8[7] = 0LL;
          v8[8] = 0LL;
          v8[9] = 0LL;
          v8[10] = 0LL;
          v8[11] = 0LL;
          v8[12] = 0LL;
          v8[13] = 0LL;
          v8[14] = 0LL;
          v8[15] = 0LL;
          v8[16] = 0LL;
          v8[17] = 0LL;
          v8[18] = 0LL;
          v8[19] = 0LL;
          v8[20] = 0LL;
          v8[21] = 0LL;
          v8[22] = 0LL;
          v8[23] = 0LL;
          v8[24] = 0LL;
          v8[25] = 0LL;
          v8[26] = 0LL;
          v8[27] = 0LL;
          v8[28] = 0LL;
          v8[29] = 0LL;
          v8[30] = 0LL;
        }
        else
        {
          Value = 0LL;
        }
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 31) >= *((_DWORD *)Value + 30) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 16);
        ++*((_DWORD *)Value + 31);
        *((_QWORD *)Value + 16) = this;
      }
    }
  }
  return this;
}
