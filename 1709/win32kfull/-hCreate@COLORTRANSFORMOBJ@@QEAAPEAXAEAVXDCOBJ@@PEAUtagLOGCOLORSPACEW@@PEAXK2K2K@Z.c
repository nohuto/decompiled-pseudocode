/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02705B8
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0290A90 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00B1B34 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C02703CC (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0270428 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // rbp
  __int64 v15; // rbx
  struct OBJECT *Object; // rax
  struct OBJECT *v17; // rsi
  __int64 (__fastcall *v18)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // rax
  __int64 v20; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v21[80]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v20 = v15;
  if ( !v15 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(32LL, 14LL, 0LL);
  v17 = Object;
  if ( Object )
  {
    v22 = 0LL;
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v22, Object, 0xEu, 2);
    if ( v9 )
    {
      *(_QWORD *)this = v17;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v20);
      v18 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v15 + 3216);
      if ( v18 )
        v10 = v18(*(_QWORD *)(v15 + 1816), a3, a4, a5, a6, a7, a8, a9, 0);
      else
        EngSetLastError(0x57u);
      if ( v10 )
      {
        *(_QWORD *)(*(_QWORD *)this + 24LL) = v10;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    }
    if ( v22 )
      _InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( !v17 )
    goto LABEL_17;
  if ( v9 )
  {
    if ( !v10 )
    {
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      COLORTRANSFORMOBJ::bDelete(this, a2, 0);
      v9 = 0LL;
      v17 = 0LL;
    }
LABEL_17:
    if ( v9 )
      return v9;
  }
  if ( v17 )
    FreeObject(v17, 14LL);
  return v9;
}
