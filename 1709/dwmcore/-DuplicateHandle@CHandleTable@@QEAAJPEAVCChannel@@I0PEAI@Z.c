/*
 * XREFs of ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x18000FFEC
 * Callers:
 *     ?DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z @ 0x18000EB00 (-DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z.c)
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18000FD78 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180010248 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CHandleTable::DuplicateHandle(
        CHandleTable *this,
        struct CChannel *a2,
        unsigned int a3,
        struct CChannel *a4,
        unsigned int *a5)
{
  unsigned int *Entry; // rax
  int NewEntry; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edi
  struct CHandleTable::HANDLE_ENTRY *v13; // rbp
  int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-28h] BYREF

  v17 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  v16 = 0;
  Entry = (unsigned int *)CHandleTable::GetEntry(this, a3);
  if ( Entry )
  {
    NewEntry = HANDLE_TABLE::GetNewEntry((struct CChannel *)((char *)a4 + 16), *Entry, &v16);
    v11 = NewEntry;
    if ( NewEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewEntry, 0xC1u);
    }
    else
    {
      v12 = v16;
      v13 = CHandleTable::GetEntry((struct CChannel *)((char *)a4 + 16), v16);
      if ( v13 )
      {
        v18[2] = *((_DWORD *)a4 + 14);
        v18[0] = 38;
        v18[1] = a3;
        v18[3] = v12;
        v14 = CChannel::SendCommand(a2, v18, 0x10u);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xDFu);
          memset_0((void *)(*((_QWORD *)a4 + 5) + v12 * *((_DWORD *)a4 + 6)), 0, *((unsigned int *)a4 + 6));
        }
        else
        {
          *((_DWORD *)v13 + 1) = 1;
          *a5 = v12;
        }
      }
      else
      {
        v11 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xCAu);
      }
    }
  }
  else
  {
    v11 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xB8u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v17);
  return v11;
}
