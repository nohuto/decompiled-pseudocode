/*
 * XREFs of VfTargetEtwUnregister @ 0x1407B6D48
 * Callers:
 *     VerifierEtwUnregister @ 0x1407C5870 (VerifierEtwUnregister.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfTargetEtwUnregister(__int64 a1)
{
  int v2; // edi
  void *v3; // rbx
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *i; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !VfSafeMode )
  {
    v2 = 0;
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v10, 0);
    v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, v4, 1LL);
    if ( v5 )
    {
      v6 = v5[7];
      if ( v6 )
      {
        for ( i = *(_QWORD **)(v6 + 16); ; i = (_QWORD *)*i )
        {
          if ( i == (_QWORD *)(v6 + 16) )
          {
            if ( !dword_14036A138 && (*(_DWORD *)(v6 + 32) & 1) == 0 && (MmVerifierData & 0x800) != 0 )
              VerifierBugCheckIfAppropriate(0xC4u, 0xDCuLL, 0LL, 0LL, 0LL);
            goto LABEL_12;
          }
          v3 = i;
          if ( i[2] == a1 )
            break;
        }
        v8 = (_QWORD *)*i;
        v2 = 1;
        if ( *(_QWORD **)(*i + 8LL) != i || (v9 = (_QWORD *)i[1], (_QWORD *)*v9 != i) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
      }
    }
LABEL_12:
    VfAvlCleanupLockContext((__int64)v10);
    if ( v2 )
      ExFreePoolWithTag(v3, 0);
  }
}
