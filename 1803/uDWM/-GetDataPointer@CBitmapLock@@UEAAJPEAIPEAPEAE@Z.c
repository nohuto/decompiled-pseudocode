/*
 * XREFs of ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180045B40
 * Callers:
 *     ?GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z @ 0x18004B680 (-GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800470A4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetDataPointer(CBitmapLock *this, unsigned int *a2, unsigned __int8 **a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = ((unsigned __int64)this - 56) & -(__int64)(this != (CBitmapLock *)72);
  v11 = v6;
  if ( *(_BYTE *)(v6 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 8));
  if ( !a3 )
  {
    v10 = 157;
LABEL_10:
    v9 = -2147024809;
    v7 = -2147024809;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10);
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v10 = 158;
    goto LABEL_10;
  }
  v7 = *((_BYTE *)this + 16) == 0 ? 0x88982F04 : 0;
  if ( !*((_BYTE *)this + 16) )
  {
    v10 = 160;
    v9 = *((_BYTE *)this + 16) == 0 ? 0x88982F04 : 0;
    goto LABEL_12;
  }
  *a2 = *((_DWORD *)this + 16);
  *a3 = (unsigned __int8 *)*((_QWORD *)this + 7);
LABEL_7:
  CGuard<CMTALock>::~CGuard<CMTALock>(&v11);
  return v7;
}
