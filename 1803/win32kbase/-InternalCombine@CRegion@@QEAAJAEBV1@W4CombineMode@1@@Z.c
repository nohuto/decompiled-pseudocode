/*
 * XREFs of ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004442C
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1C0044890 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C00447D0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegion::InternalCombine(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v9; // rdi
  _WORD *Object; // rax
  _WORD *v11; // rbx
  _WORD *v13; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+28h] [rbp-8h]
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v4 = (_DWORD *)(a2 + 12);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = 0;
  v7 = a3;
  if ( v5 == 2 && *v4 == 2 )
    goto LABEL_7;
  if ( *v4 )
  {
    if ( *v4 != 1 )
    {
      if ( !v5 )
      {
        v6 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
        goto LABEL_6;
      }
      if ( v5 != 1 )
        return (unsigned int)-1073741595;
      if ( a3 == 1 )
        goto LABEL_38;
      if ( a3 == 2 )
        goto LABEL_7;
      if ( a3 <= 2 )
        return (unsigned int)-1073741811;
      if ( a3 > 4 )
      {
        if ( a3 != 5 )
          return (unsigned int)-1073741811;
LABEL_38:
        v6 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
        v7 = 5;
        goto LABEL_6;
      }
      return (unsigned int)-2147020579;
    }
    if ( a3 == 1 )
      goto LABEL_7;
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
        return (unsigned int)-2147020579;
      if ( a3 == 4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        goto LABEL_7;
      }
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    goto LABEL_7;
  }
  if ( a3 == 5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
LABEL_6:
  if ( (v6 & 0x80000000) != 0 )
    return v6;
LABEL_7:
  if ( *(_DWORD *)(a1 + 12) != 2 || *v4 != 2 )
    return v6;
  v16 = *(_QWORD *)(a2 + 16);
  if ( !v16 || (unsigned int)(v7 - 1) > 4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v15 = v9;
  Object = AllocateObject(0xD8uLL, 4u, 0);
  v13 = Object;
  v11 = Object;
  if ( Object )
  {
    *((_DWORD *)Object + 22) = 0;
    *((_DWORD *)Object + 23) = 0;
    *((_DWORD *)Object + 24) = 0;
    *((_DWORD *)Object + 25) = 0;
    *((_DWORD *)Object + 20) = 120;
    *((_DWORD *)Object + 21) = 1;
    *((_DWORD *)Object + 26) = 0;
    *((_DWORD *)Object + 27) = 0x80000000;
    *((_DWORD *)Object + 28) = 0x7FFFFFFF;
    *((_DWORD *)Object + 29) = 0;
    *((_QWORD *)Object + 5) = (char *)Object + (unsigned int)(4 * *((_DWORD *)Object + 26) + 16) + 104;
    *((_DWORD *)Object + 6) = 216;
    *((_DWORD *)Object + 8) = 0;
    *((_DWORD *)Object + 7) = 0;
    *((_DWORD *)Object + 9) = 0;
    *((_QWORD *)Object + 7) = Object + 24;
    *((_QWORD *)Object + 6) = Object + 24;
  }
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
  if ( v9 && v11 )
  {
    if ( (unsigned int)RGNOBJ::bMerge(
                         (RGNOBJ *)&v13,
                         (struct RGNOBJ *)&v15,
                         (struct RGNOBJ *)&v16,
                         *((_BYTE *)&gafjRgnOp + v7)) )
    {
      RGNOBJ::vSwap((RGNOBJ *)&v13, (struct RGNOBJ *)&v15);
      v6 = 0;
      *(_QWORD *)(a1 + 16) = v15;
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
  return v6;
}
