/*
 * XREFs of ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C01887E0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00136D0 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00145BC (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsWithoutDestroy(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        __int64 a4)
{
  int v6; // ebp
  struct DXGALLOCATION *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  char v15; // [rsp+28h] [rbp-30h]
  DXGPUSHLOCK *v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v7 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this + 20, (__int64)a3, a4);
  v14 = 0LL;
  v15 = 0;
  if ( a2 )
  {
    LOBYTE(v8) = 1;
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v14, (struct DXGRESOURCE *)((char *)a2 + 80), v8, v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
  }
  else
  {
    DXGAUTOPUSHLOCK::AcquireExclusive(v16);
  }
  v10 = (unsigned int)(v6 - 1);
  v11 = (_QWORD *)((char *)v7 + 56);
  v12 = *((_QWORD *)v7 + 7);
  if ( v6 != 1 )
  {
    do
    {
      v7 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 8);
      --v10;
    }
    while ( v10 );
  }
  v13 = *((_QWORD *)v7 + 8);
  if ( v12 )
  {
    *v11 = 0LL;
    *((_QWORD *)v7 + 8) = 0LL;
    *(_QWORD *)(v12 + 64) = v13;
    if ( v13 )
      *(_QWORD *)(v13 + 56) = v12;
  }
  else
  {
    if ( a2 )
      *((_QWORD *)a2 + 3) = v13;
    else
      this[6] = (struct _KTHREAD *)v13;
    *((_QWORD *)v7 + 8) = 0LL;
    if ( v13 )
      *(_QWORD *)(v13 + 56) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
}
