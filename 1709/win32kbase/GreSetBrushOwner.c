/*
 * XREFs of GreSetBrushOwner @ 0x1C00484E0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgAllocateObjectAttr @ 0x1C001E6B8 (HmgAllocateObjectAttr.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C004DCF0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0051618 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0053EA4 (HmgIncProcessHandleCount.c)
 *     HmgFreeObjectAttr @ 0x1C00630B8 (HmgFreeObjectAttr.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall GreSetBrushOwner(struct HOBJ__ *a1, unsigned int a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // ecx
  _DWORD *v13; // r13
  GdiHandleManager *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // ebx
  _QWORD *v23; // rax
  unsigned int CurrentProcessId; // eax
  struct HOBJ__ *v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rdx
  unsigned int v28; // ebx
  unsigned int v29; // eax
  BOOL v30; // edi
  _QWORD *ObjectAttr; // [rsp+30h] [rbp-88h]
  _QWORD v32[2]; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v33; // [rsp+60h] [rbp-58h] BYREF
  int v34; // [rsp+68h] [rbp-50h]

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v32, (HBRUSH)a1);
  if ( v32[0] && (*(_DWORD *)(v32[0] + 48LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v32);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v32);
  v9 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr(v6, v5, v7, v8);
  GreAcquireHmgrSemaphore(v6, v5, v7);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v33, a1, 0, 0, 0);
  v12 = v34;
  if ( v34 )
  {
    v13 = v33;
    v14 = gpHandleManager;
    v15 = GdiHandleManager::DecodeIndex(gpHandleManager, *v33 & 0xFFFFFF);
    v16 = v15;
    v17 = *((_QWORD *)v14 + 2);
    v18 = *(_DWORD *)(v17 + 2056);
    if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
      goto LABEL_45;
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0;
    v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
    if ( v19 )
      v16 = ((1 - v19) << 16) - v18 + v15;
    if ( v16 >= *(_DWORD *)(v20 + 20) )
LABEL_45:
      v21 = 0LL;
    else
      v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8LL * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
    if ( *((_BYTE *)v13 + 14) != 16 || *((_WORD *)v13 + 6) != WORD1(a1) )
      goto LABEL_25;
    if ( *(_WORD *)(v21 + 12) )
    {
      if ( *(struct _KTHREAD **)(v21 + 16) != KeGetCurrentThread() )
        goto LABEL_25;
      v13 = v33;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v22 = v13[2] & 0xFFFFFFFE;
      if ( v22 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v23 = *(_QWORD **)(v21 + 56);
        if ( v23 != (_QWORD *)(v21 + 80) )
        {
          *(_QWORD *)(v21 + 80) = *v23;
          ObjectAttr = *(_QWORD **)(v21 + 56);
          *(_QWORD *)(v21 + 56) = v21 + 80;
          *((_QWORD *)v13 + 2) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v33, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (v13[2] & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_25;
        HANDLELOCK::Pid((HANDLELOCK *)&v33, a2);
      }
      v9 = 1;
      if ( a2 || (v25 = *(struct HOBJ__ **)(v21 + 32)) == 0LL )
      {
LABEL_25:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
        v12 = v34;
        if ( v34 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
        goto LABEL_27;
      }
      v26 = 0;
LABEL_31:
      GreSetBitmapOwnerEx(v25, v26);
      goto LABEL_25;
    }
    if ( a2 != -2147483646 )
      goto LABEL_25;
    v28 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v29 = v13[2] & 0xFFFFFFFE;
    if ( v29 != v28 && v29 != -2147483630 && v29 )
      goto LABEL_25;
    v30 = 0;
    v9 = 1;
    if ( v29 != v28 )
    {
      v9 = HmgIncProcessHandleCount(v28, v27);
      v30 = v9 != 0;
    }
    if ( v9 )
    {
      if ( *((_QWORD *)v13 + 2) )
      {
LABEL_42:
        HANDLELOCK::Pid((HANDLELOCK *)&v33, v28);
        v25 = *(struct HOBJ__ **)(v21 + 32);
        if ( !v25 )
          goto LABEL_25;
        v26 = -2147483646;
        goto LABEL_31;
      }
      if ( ObjectAttr )
      {
        *(_QWORD *)(v21 + 56) = ObjectAttr;
        *((_QWORD *)v13 + 2) = ObjectAttr;
        *ObjectAttr = *(_QWORD *)(v21 + 80);
        ObjectAttr = 0LL;
        goto LABEL_42;
      }
      v9 = 0;
    }
    if ( v30 )
      HmgDecProcessHandleCount(v28);
    goto LABEL_25;
  }
LABEL_27:
  GreReleaseHmgrSemaphore(v12, v10, v11);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v9;
}
