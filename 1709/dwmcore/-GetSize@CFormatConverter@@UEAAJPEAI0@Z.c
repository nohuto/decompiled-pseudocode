/*
 * XREFs of ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x1801C5CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFormatConverter::GetSize(CFormatConverter *this, unsigned int *a2, unsigned int *a3)
{
  DWORD v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = -2003292404;
  v9 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 8) & -(__int64)(this != (CFormatConverter *)16));
  EnterCriticalSection(v9);
  if ( !a2 )
  {
    v8 = 519;
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, v8);
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v8 = 520;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 6) )
  {
    v6 = 0;
    *a2 = *((_DWORD *)this + 20);
    *a3 = *((_DWORD *)this + 21);
    goto LABEL_5;
  }
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x212u);
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
