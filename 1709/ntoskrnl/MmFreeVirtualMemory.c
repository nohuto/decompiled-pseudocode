/*
 * XREFs of MmFreeVirtualMemory @ 0x140494760
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x140494720 (NtFreeVirtualMemory.c)
 * Callees:
 *     MiFreeVadRange @ 0x140032AC0 (MiFreeVadRange.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x140462914 (MiCheckSecuredVad.c)
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiFreeEnclaveModules @ 0x1406E8898 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x140747CCC (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        int a6)
{
  ULONG_PTR v7; // r10
  char *v8; // r14
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r12
  int v17; // ebx
  _QWORD *p_Lock; // rcx
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // r13
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rsi
  PVOID v29; // rdi
  __int64 result; // rax
  PVOID v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  unsigned int v34; // [rsp+40h] [rbp-F8h] BYREF
  char v35; // [rsp+44h] [rbp-F4h] BYREF
  PVOID Object; // [rsp+48h] [rbp-F0h]
  ULONG_PTR v37; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v38; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v39; // [rsp+68h] [rbp-D0h]
  ULONG_PTR BugCheckParameter1a; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v42; // [rsp+80h] [rbp-B8h]
  __int64 *v43; // [rsp+88h] [rbp-B0h]
  unsigned __int64 *v44; // [rsp+90h] [rbp-A8h]
  _QWORD v45[4]; // [rsp+A0h] [rbp-98h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v46; // [rsp+C0h] [rbp-78h] BYREF

  v43 = a3;
  v44 = a2;
  v7 = BugCheckParameter1;
  v37 = BugCheckParameter1;
  v8 = 0LL;
  v45[0] = 0LL;
  if ( (a4 & 0xC000) == 49152 || (a4 & 0xC000) == 0 )
    return 3221225714LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a5 )
  {
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  v13 = *a2;
  v42 = v13;
  v45[2] = v13;
  v14 = *a3;
  v41 = v14;
  v45[3] = v14;
  if ( v13 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFEFFFFLL - v13 < v14 )
    return 3221225713LL;
  v15 = (v14 + v13 - 1) | 0xFFF;
  v16 = v13 & 0xFFFFFFFFFFFFF000uLL;
  v38 = (v13 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v39 = v15 >> 12;
  v17 = 0;
  v46.SavedApcState.Process = 0LL;
  if ( v7 == -1LL )
  {
    p_Lock = &Process->Header.Lock;
    Object = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(v7, 1834380621, (__int64)&BugCheckParameter1a, 0LL, 0LL);
    v34 = result;
    if ( (int)result < 0 )
      return result;
    p_Lock = (_QWORD *)BugCheckParameter1a;
    Object = (PVOID)BugCheckParameter1a;
    if ( Process != (_KPROCESS *)BugCheckParameter1a )
    {
      v17 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v46);
      p_Lock = (_QWORD *)BugCheckParameter1a;
    }
    v7 = v37;
  }
  v35 = 0;
  if ( (a4 & 0xFFFF3FFF) == 0 || p_Lock[226] && (a4 & 0x10000) != 0 && (a4 & 0x4000) == 0 )
  {
    v19 = MiObtainReferencedVad(v16, &v34);
    v20 = v19;
    if ( v19 )
    {
      v8 = (char *)v19;
      while ( 1 )
      {
        v21 = *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32);
        v22 = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
        v23 = v41;
        v24 = v38;
        if ( v41 )
        {
          v25 = v39;
        }
        else
        {
          v25 = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
          v39 = v25;
          v15 = (v22 << 12) | 0xFFF;
          if ( (a4 & 0x8000) != 0 )
          {
            if ( v38 != v21 )
              goto LABEL_81;
            v16 = v21 << 12;
          }
        }
        if ( v38 < v21 || v38 > v22 || v25 < v21 || v25 > v22 )
        {
          result = 3221225498LL;
          goto LABEL_84;
        }
        v26 = *(_DWORD *)(v20 + 48);
        if ( (a4 & 0x10000) != 0 )
        {
          if ( (v26 & 0x8000) != 0 || (v26 & 7) != 0 || v38 == v21 && v25 == v22 )
          {
LABEL_75:
            result = 3221225499LL;
            goto LABEL_84;
          }
        }
        else
        {
          if ( (v26 & 0x8000) == 0 || (v26 & 7) == 1 )
            goto LABEL_75;
          v24 = v38;
        }
        if ( (v26 & 0x4000) != 0 )
        {
          if ( (a4 & 0x8000) != 0 )
          {
            v32 = v22 - v21 + 1;
            v33 = v21 << 12;
          }
          else
          {
            v32 = v25 - v24 + 1;
            v33 = v42;
          }
          result = MiCheckSecuredVad(v20, v33, v32 << 12, 0x55u);
          v34 = result;
          if ( (int)result < 0 )
          {
LABEL_76:
            v7 = v37;
            p_Lock = Object;
            goto LABEL_86;
          }
          v23 = v41;
          v24 = v38;
          v25 = v39;
        }
        if ( (a4 & 0x8000) == 0 )
          break;
        result = MiFreeVadRange(v20, (int)&v35, v24, v25, (__int64)Object);
        v34 = result;
        if ( (int)result >= 0 )
        {
          if ( v17 )
            KiUnstackDetachProcess(&v46, 0LL);
          v31 = Object;
          if ( v45[0] )
            MiFreeEnclaveModules(v45, Object);
          if ( v37 != -1LL )
            ObfDereferenceObjectWithTag(v31, 0x6D566D4Du);
          *v43 = v15 - v16 + 1;
          *v44 = v16;
          return 0LL;
        }
        if ( (_DWORD)result != -1073741267 )
          goto LABEL_76;
      }
      v27 = *(_DWORD *)(v20 + 48);
      if ( (v27 & 7) == 3 )
      {
        result = 3221225632LL;
        goto LABEL_84;
      }
      if ( (v27 & 0x40000) != 0 && (a6 & 0x10000000) == 0 )
      {
        result = 3221225632LL;
        goto LABEL_84;
      }
      if ( (v27 & 7) == 5 )
      {
        result = 3221225632LL;
      }
      else
      {
        if ( v23 )
          goto LABEL_31;
        if ( v42 >> 12 == (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) )
        {
          v15 = ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF;
LABEL_31:
          MiDecommitRegion(v20, v16, v15);
          MiUnlockAndDereferenceVad((char *)v20);
          v28 = v15 - v16 + 1;
          v29 = Object;
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            PerfInfoLogVirtualFree(v16, v28, Object, a4);
          if ( v17 )
            KiUnstackDetachProcess(&v46, 0LL);
          if ( v37 != -1LL )
            ObfDereferenceObjectWithTag(v29, 0x6D566D4Du);
          *v43 = v28;
          *v44 = v16;
          return 0LL;
        }
LABEL_81:
        result = 3221225631LL;
      }
    }
    else
    {
      result = v34;
    }
LABEL_84:
    v7 = v37;
    p_Lock = Object;
  }
  else
  {
    result = 3221225714LL;
  }
  v34 = result;
LABEL_86:
  if ( v8 )
  {
    MiUnlockAndDereferenceVad(v8);
    v7 = v37;
    result = v34;
    p_Lock = Object;
  }
  if ( v35 == 1 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)p_Lock);
    v7 = v37;
    result = v34;
    p_Lock = Object;
  }
  if ( v17 )
  {
    KiUnstackDetachProcess(&v46, 0LL);
    v7 = v37;
    result = v34;
    p_Lock = Object;
  }
  if ( v7 != -1LL )
  {
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    return v34;
  }
  return result;
}
