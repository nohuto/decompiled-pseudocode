/*
 * XREFs of SepAdtStagingEvent @ 0x14072B970
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140595FF8 (SeAuditHandleCreation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14015C0D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14025EBF4 (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1406EFC08 (ObNormalizeHandleValue.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 */

bool __fastcall SepAdtStagingEvent(
        __int16 a1,
        __int64 a2,
        unsigned __int64 *a3,
        const UNICODE_STRING *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  void *v13; // rsi
  void *v14; // r14
  __int64 v15; // r12
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // edi
  __int64 *v18; // rax
  __int64 v19; // rdi
  int v20; // r8d
  int v21; // r15d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 *v25; // rcx
  int v26; // eax
  size_t v27; // r13
  SIZE_T v28; // r15
  char *PoolWithTag; // rax
  char *v30; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int16 v36; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v37; // [rsp+2Ah] [rbp-DEh]
  size_t Size; // [rsp+2Ch] [rbp-DCh] BYREF
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  void *v40; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h]
  const UNICODE_STRING *v43; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v44; // [rsp+60h] [rbp-A8h]
  _QWORD v45[132]; // [rsp+68h] [rbp-A0h] BYREF

  v12 = 0LL;
  v43 = a4;
  v44 = a3;
  v13 = 0LL;
  v37 = a1;
  v14 = 0LL;
  v15 = *(_QWORD *)(a12 + 72);
  P = 0LL;
  Size = 0LL;
  Src = 0LL;
  v40 = 0LL;
  v36 = 0;
  if ( !v15 || !*(_BYTE *)(v15 + 216) || a1 != 116 && a1 != 128 && RtlCompareUnicodeString(a4, &SepFileTypeName, 0) )
    return 1;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a6 )
    {
      v12 = *(_QWORD *)(a6 + 24);
      v18 = *(__int64 **)(a6 + 152);
    }
    else
    {
      v18 = *(__int64 **)(a7 + 152);
    }
    v19 = *(_QWORD *)(a7 + 24);
    v42 = *v18;
    memset(v45, 0, 0x418uLL);
    v45[0] = 0x12D200000003LL;
    LOWORD(v45[2]) = 129;
    v20 = 16;
    v21 = 8;
    if ( (a8 & 0x2000000) != 0 || (WORD1(v45[2]) = 8, !a10) )
      WORD1(v45[2]) = 16;
    v45[6] = v42;
    LODWORD(v45[3]) = 4;
    v45[7] = 0x2000000001LL;
    v22 = *(unsigned __int8 *)(v42 + 1);
    v45[10] = &SeSubsystemName;
    v45[11] = 0x800000005LL;
    v45[12] = v12;
    HIDWORD(v45[3]) = 4 * v22 + 8;
    if ( !a6 )
      v45[12] = v19;
    v45[18] = &SeSubsystemName;
    v45[15] = 0x2000000001LL;
    LODWORD(v45[1]) = 4;
    if ( v43 )
    {
      v23 = v43->Length + 16;
      v45[22] = v43;
      LODWORD(v45[19]) = 1;
      HIDWORD(v45[19]) = v23;
      if ( a5 )
      {
        if ( v37 == 116 || (LODWORD(v45[23]) = 1, v37 == 128) )
          LODWORD(v45[23]) = 2;
        v24 = *a5;
        v45[26] = a5;
        HIDWORD(v45[23]) = v24 + 16;
      }
      v45[27] = 0x80000000BLL;
      if ( v44 )
        v45[28] = ObNormalizeHandleValue(*v44);
      else
        v45[28] = 0LL;
      v45[32] = a11;
      v45[38] = P;
      v25 = *(__int16 **)(v15 + 56);
      HIDWORD(v45[35]) = v20 + *(unsigned __int16 *)P;
      v45[31] = 0x80000000BLL;
      LODWORD(v45[35]) = 2;
      LODWORD(v45[1]) = 9;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(v25, &Src, (ULONG *)&Size + 1, &v36);
      if ( AllocatedFullProcessImageName < 0 )
      {
        v13 = Src;
      }
      else
      {
        v26 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v15 + 64), &v40, (ULONG *)&Size, (_BYTE *)&v36 + 1);
        v14 = v40;
        AllocatedFullProcessImageName = v26;
        v13 = Src;
        if ( v26 >= 0 )
        {
          if ( !Src && !v40 )
            v21 = 0;
          v27 = HIDWORD(Size);
          v28 = (unsigned int)(Size - v21 + HIDWORD(Size) + 152);
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v28, 0x70416553u);
          v30 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)v28);
            *((_DWORD *)v30 + 34) = a10;
            if ( !a10 )
              a9 = a8;
            *((_DWORD *)v30 + 33) = 4;
            *(_DWORD *)v30 = a9 & 0xFDFFFFFF;
            *(_OWORD *)(v30 + 4) = *(_OWORD *)(v15 + 88);
            *(_OWORD *)(v30 + 20) = *(_OWORD *)(v15 + 104);
            *(_OWORD *)(v30 + 36) = *(_OWORD *)(v15 + 120);
            *(_OWORD *)(v30 + 52) = *(_OWORD *)(v15 + 136);
            *(_OWORD *)(v30 + 68) = *(_OWORD *)(v15 + 152);
            *(_OWORD *)(v30 + 84) = *(_OWORD *)(v15 + 168);
            *(_OWORD *)(v30 + 100) = *(_OWORD *)(v15 + 184);
            *(_OWORD *)(v30 + 116) = *(_OWORD *)(v15 + 200);
            if ( v13 )
              memmove(v30 + 144, v13, v27);
            if ( v14 )
              memmove(&v30[v27 + 144], v14, (unsigned int)Size);
            v32 = 10LL;
            LODWORD(v45[1]) = 10;
            v33 = 0LL;
            LODWORD(v45[39]) = 29;
            HIDWORD(v45[39]) = v28;
            v45[42] = v30;
            LODWORD(v45[43]) = 30;
            HIDWORD(v45[43]) = v28;
            v45[46] = v30;
            while ( 1 )
            {
              v34 = v33 + 4 * v32;
              ++v33;
              v45[v34 + 4] = 0LL;
              if ( v33 >= 2 )
                break;
              v32 = LODWORD(v45[1]);
            }
            ++LODWORD(v45[1]);
            SepAdtLogAuditRecord(v45);
            ExFreePoolWithTag(v30, 0);
          }
          else
          {
            AllocatedFullProcessImageName = -1073741670;
          }
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741811;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v36 && v13 )
    ExFreePoolWithTag(v13, 0);
  if ( HIBYTE(v36) && v14 )
    ExFreePoolWithTag(v14, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
