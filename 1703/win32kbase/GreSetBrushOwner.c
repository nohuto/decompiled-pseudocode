/*
 * XREFs of GreSetBrushOwner @ 0x1C002E550
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C0058E00 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00311DC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     GreSetBitmapOwner @ 0x1C00432D0 (GreSetBitmapOwner.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00591BC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgAllocateObjectAttr @ 0x1C005997C (HmgAllocateObjectAttr.c)
 *     HmgIncProcessHandleCount @ 0x1C0076CF8 (HmgIncProcessHandleCount.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v5; // r15d
  _QWORD *ObjectAttr; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // r12
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rdx
  unsigned int v15; // r8d
  signed int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r14
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  unsigned int v27; // eax
  BOOL v28; // edi
  _QWORD v29[2]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD *v30; // [rsp+48h] [rbp-50h] BYREF
  int v31; // [rsp+50h] [rbp-48h]

  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v29, a1);
  if ( v29[0] && (*(_DWORD *)(v29[0] + 48LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore();
  v30 = 0LL;
  v31 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v30, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)&v30) )
  {
    v10 = v30;
    v11 = gpHandleManager;
    v12 = GdiHandleManager::DecodeIndex(gpHandleManager, *v30 & 0xFFFFFF);
    v13 = v12;
    v14 = *((_QWORD *)v11 + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v12 < v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( v12 >= v15 )
      {
        v16 = ((v12 - v15) >> 16) + 1;
        if ( (v12 - v15) >> 16 == -2 )
          goto LABEL_46;
      }
      else
      {
        v16 = 0;
      }
      v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
      if ( v16 )
        v13 = v12 - (v16 << 16) - v15 + 0x10000;
      if ( v13 < *(_DWORD *)(v17 + 20) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
LABEL_14:
        if ( *((_BYTE *)v10 + 14) != 16 || *((_WORD *)v10 + 6) != HIWORD(v3) )
          goto LABEL_25;
        if ( *(_WORD *)(v18 + 12) )
        {
          if ( *(struct _KTHREAD **)(v18 + 16) != KeGetCurrentThread() )
            goto LABEL_25;
          v10 = v30;
        }
        if ( a2 == -2147483630 || !a2 )
        {
          v19 = v10[2] & 0xFFFFFFFE;
          if ( v19 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            v20 = *(_QWORD **)(v18 + 56);
            if ( v20 != (_QWORD *)(v18 + 80) )
            {
              *(_QWORD *)(v18 + 80) = *v20;
              ObjectAttr = *(_QWORD **)(v18 + 56);
              *(_QWORD *)(v18 + 56) = v18 + 80;
              *((_QWORD *)v10 + 2) = 0LL;
            }
            HANDLELOCK::Pid((HANDLELOCK *)&v30, a2);
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
          }
          else
          {
            if ( (v10[2] & 0xFFFFFFFE) != 0x80000012 )
              goto LABEL_25;
            HANDLELOCK::Pid((HANDLELOCK *)&v30, a2);
          }
          v5 = 1;
          if ( a2 )
            goto LABEL_25;
          v22 = *(_QWORD *)(v18 + 32);
          if ( !v22 )
            goto LABEL_25;
          v23 = 0LL;
          goto LABEL_32;
        }
        if ( a2 != -2147483646 )
          goto LABEL_25;
        v25 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
        v27 = v10[2] & 0xFFFFFFFE;
        if ( v27 != (_DWORD)v25 && v27 != -2147483630 && v27 )
          goto LABEL_25;
        v28 = 0;
        v5 = 1;
        if ( v27 != (_DWORD)v25 )
        {
          v5 = HmgIncProcessHandleCount((unsigned int)v25, v24, v26);
          v28 = v5 != 0;
        }
        if ( v5 )
        {
          if ( *((_QWORD *)v10 + 2) )
          {
LABEL_43:
            HANDLELOCK::Pid((HANDLELOCK *)&v30, v25);
            v22 = *(_QWORD *)(v18 + 32);
            if ( !v22 )
              goto LABEL_25;
            v23 = 2147483650LL;
LABEL_32:
            GreSetBitmapOwner(v22, v23);
LABEL_25:
            HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
            goto LABEL_26;
          }
          if ( ObjectAttr )
          {
            *(_QWORD *)(v18 + 56) = ObjectAttr;
            *((_QWORD *)v10 + 2) = ObjectAttr;
            *ObjectAttr = *(_QWORD *)(v18 + 80);
            ObjectAttr = 0LL;
            goto LABEL_43;
          }
          v5 = 0;
        }
        if ( v28 )
          HmgDecProcessHandleCount((unsigned int)v25);
        goto LABEL_25;
      }
    }
LABEL_46:
    v18 = 0LL;
    goto LABEL_14;
  }
LABEL_26:
  if ( v31 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
  GreReleaseHmgrSemaphore(v8, v7, v9);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
