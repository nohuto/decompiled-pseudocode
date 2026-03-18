/*
 * XREFs of SepRmGlobalSaclSetWrkr @ 0x140631850
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepRmFetchGlobalSacl @ 0x1406318E0 (SepRmFetchGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140794738 (SepRmGlobalSaclFind.c)
 */

void __fastcall SepRmGlobalSaclSetWrkr(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r14
  char v4; // si
  int GlobalSacl; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *PoolWithTag; // rbx
  PVOID v12; // rax
  void *v13; // rcx
  unsigned __int16 v14; // ax
  void *v15; // rdx
  PVOID v16; // rax
  unsigned __int16 v17; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 v18; // [rsp+22h] [rbp-16h]
  void *Src; // [rsp+28h] [rbp-10h]
  int v20; // [rsp+70h] [rbp+38h] BYREF
  PVOID P; // [rsp+78h] [rbp+40h] BYREF
  PVOID v22; // [rsp+80h] [rbp+48h] BYREF
  _QWORD *v23; // [rsp+88h] [rbp+50h] BYREF

  v2 = *(_WORD *)(a1 + 44);
  v22 = 0LL;
  v23 = 0LL;
  v20 = 0;
  P = 0LL;
  v18 = v2;
  v4 = 0;
  v17 = v2;
  Src = (void *)(a1 + 46);
  GlobalSacl = SepRmFetchGlobalSacl(&v17, &v20, &P);
  if ( GlobalSacl >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = 1;
    ExAcquireResourceExclusiveLite(&SepRmGlobalSaclLock, 1u);
    GlobalSacl = SepRmGlobalSaclFind(&v22, &v23, &v17, 0LL);
    if ( GlobalSacl < 0 )
    {
      if ( !v20 )
        goto LABEL_2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C635347u);
      if ( PoolWithTag )
      {
        v12 = ExAllocatePoolWithTag(PagedPool, v2, 0x6C635347u);
        PoolWithTag[2] = v12;
        v13 = v12;
        if ( v12 )
        {
          v14 = v18;
          v15 = Src;
          *((_WORD *)PoolWithTag + 5) = v18;
          *((_WORD *)PoolWithTag + 4) = v14;
          memmove(v13, v15, v2);
          v16 = P;
          P = 0LL;
          PoolWithTag[3] = v16;
          *PoolWithTag = SepRmGlobalSaclHead;
          SepRmGlobalSaclHead = (__int64)PoolWithTag;
          goto LABEL_2;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      GlobalSacl = -1073741801;
      goto LABEL_2;
    }
    v7 = v22;
    if ( v20 )
    {
      v8 = (void *)*((_QWORD *)v22 + 3);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      v7[3] = P;
      goto LABEL_11;
    }
    if ( v23 )
      *v23 = *(_QWORD *)v22;
    else
      SepRmGlobalSaclHead = *(_QWORD *)v22;
    v9 = (void *)v7[2];
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      v7[2] = 0LL;
    }
    v10 = (void *)v7[3];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      v7[3] = 0LL;
    }
    ExFreePoolWithTag(v7, 0);
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
  {
LABEL_11:
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(a2 + 40) = GlobalSacl;
}
