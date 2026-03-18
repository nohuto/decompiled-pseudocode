/*
 * XREFs of KiPreprocessFault @ 0x1400DA6B4
 * Callers:
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x1400DB06C (KiOpDecode.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiCheckForAtlThunk @ 0x14020D1E4 (KiCheckForAtlThunk.c)
 *     KiOpPreprocessSecureFault @ 0x14020D598 (KiOpPreprocessSecureFault.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  void *v11; // rax
  void *v12; // rdx
  bool v13; // cf
  int v14; // edi
  int v15; // eax
  __int64 v16; // rbp
  char v17; // si
  int v19; // ecx
  struct _KTHREAD *CurrentThread; // rax
  void *v21; // rcx
  unsigned __int16 SListFaultCount; // cx
  _BYTE v23[88]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v24; // [rsp+88h] [rbp-20h]
  char v25; // [rsp+90h] [rbp-18h]
  char v26; // [rsp+91h] [rbp-17h]

  v6 = *(_DWORD *)a1 - 268435457;
  if ( !v6 )
  {
    v14 = 0x80000000;
LABEL_22:
    *(_DWORD *)a1 = -1073741819;
    goto LABEL_10;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v14 = 0x40000000;
    *(_DWORD *)a1 = -1073741795;
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = 0x20000000;
    *(_DWORD *)a1 = -1073741676;
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_5;
  v19 = v9 - 2;
  if ( v19 )
  {
    if ( v19 != 1 )
      return 0;
    v14 = 0x4000000;
    goto LABEL_22;
  }
  if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
    return 1;
  if ( *(_DWORD *)a1 == 268435460 )
  {
LABEL_5:
    v10 = *(unsigned __int16 *)(a2 + 56);
    if ( v10 == 16 )
    {
      v11 = &ExpInterlockedPopEntrySListFault;
      v12 = &ExpInterlockedPopEntrySListResume;
    }
    else
    {
      if ( *(_WORD *)(a2 + 56) != 51 )
        goto LABEL_8;
      v11 = (void *)KeUserPopEntrySListFault;
      v12 = (void *)KeUserPopEntrySListResume;
    }
    if ( *(void **)(a2 + 248) != v11 )
    {
LABEL_8:
      v13 = *(_DWORD *)(a1 + 24) < 2u;
      v14 = 0x10000000;
      *(_DWORD *)a1 = -1073741819;
      if ( v13 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
        goto LABEL_10;
      if ( a3 )
      {
        v14 = 0x8000000;
        goto LABEL_10;
      }
      return 0;
    }
    if ( (_WORD)v10 != 16 )
    {
      CurrentThread = KeGetCurrentThread();
      v21 = *(void **)(a1 + 40);
      if ( v21 == CurrentThread->SListFaultAddress )
      {
        SListFaultCount = CurrentThread->SListFaultCount;
        if ( SListFaultCount > 0x400u )
        {
          CurrentThread->SListFaultCount = 0;
          goto LABEL_8;
        }
        CurrentThread->SListFaultCount = SListFaultCount + 1;
      }
      else
      {
        CurrentThread->SListFaultCount = 0;
        CurrentThread->SListFaultAddress = v21;
      }
    }
    *(_QWORD *)(a2 + 248) = v12;
    return 1;
  }
  v14 = 0x80000000;
LABEL_10:
  v15 = KiOpDecode(a1, a2, a3, v14, v23);
  if ( v15 < 0 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = v24;
    if ( v24 )
      v15 = (*(__int64 (__fastcall **)(_BYTE *))(v24 + 16))(v23);
  }
  v17 = 0;
  if ( v15 < 0 || !v16 || (v17 = v25) == 0 )
  {
    if ( v14 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !v26 )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 40) = -1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
    else if ( v14 == 0x8000000 && (int)KiCheckForAtlThunk(v23) >= 0 )
    {
      return v25;
    }
  }
  return v17;
}
