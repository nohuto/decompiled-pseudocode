/*
 * XREFs of WmipSendGuidUpdateNotifications @ 0x1405FF2B0
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1405FF044 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 */

void __fastcall WmipSendGuidUpdateNotifications(int a1, unsigned int a2, _OWORD **a3)
{
  __int64 v3; // r15
  int v6; // edi
  unsigned int v7; // esi
  char *PoolWithTag; // rax
  char *v9; // r14
  __int64 v10; // rdx
  _WORD *v11; // rax
  __int16 v12; // cx
  __int64 v13; // rax
  char *v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // [rsp+20h] [rbp-28h]

  v3 = a2;
  *(_QWORD *)&v17 = 0x11D0E777B48D49A1LL;
  v6 = 16 * a2 + 8;
  *((_QWORD *)&v17 + 1) = 0x102906C9A0000CA5LL;
  v7 = 16 * a2 + 110;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x70696D57u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_DWORD *)v9 = v7;
    *((_DWORD *)v9 + 11) = 10;
    *(_OWORD *)(v9 + 24) = v17;
    *((_DWORD *)v9 + 12) = 64;
    *((_DWORD *)v9 + 14) = 96;
    v10 = 14LL;
    *((_DWORD *)v9 + 15) = v6;
    *((_WORD *)v9 + 32) = 28;
    v11 = v9 + 66;
    while ( v10 != -2147483632 )
    {
      v12 = *(_WORD *)((char *)v11 + (char *)L"REGUPDATEINFO" - (v9 + 66));
      if ( !v12 )
        break;
      *v11++ = v12;
      if ( !--v10 )
      {
        --v11;
        break;
      }
    }
    *v11 = 0;
    v13 = *((unsigned int *)v9 + 14);
    v14 = &v9[v13 + 8];
    *(_DWORD *)&v9[v13] = a1;
    *(_DWORD *)&v9[v13 + 4] = v3;
    if ( (_DWORD)v3 )
    {
      v15 = v3;
      do
      {
        v16 = *a3;
        v14 += 16;
        a3 += 2;
        *((_OWORD *)v14 - 1) = *v16;
        --v15;
      }
      while ( v15 );
    }
    WmipProcessEvent(v9);
    ExFreePoolWithTag(v9, 0);
  }
}
