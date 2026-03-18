/*
 * XREFs of ??1CExpressionManager@@UEAA@XZ @ 0x18015FD10
 * Callers:
 *     ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x18015FDC0 (--_ECExpressionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x180133AFC (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTarget.c)
 */

void __fastcall CExpressionManager::~CExpressionManager(CExpressionManager *this)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  CTargetMapEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CExpressionManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 304);
        ;
        CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(i, v3) )
  {
    RestartKey = 0LL;
    v3 = (CTargetMapEntry *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v3 )
      break;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 30);
  `vector destructor iterator'(
    (char *)this + 176,
    32LL,
    2LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  *((_QWORD *)this + 5) = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
