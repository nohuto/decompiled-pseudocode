/*
 * XREFs of ndisOidPostIovCreateVPort @ 0x1C006D1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisIovAddVPortToPFList @ 0x1C006BDAC (ndisIovAddVPortToPFList.c)
 *     ndisIovAddVPortToVFList @ 0x1C006BDFC (ndisIovAddVPortToVFList.c)
 */

void __fastcall ndisOidPostIovCreateVPort(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rcx
  __int64 *v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *i; // rax
  __int64 *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *j; // rax
  __int64 *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  KIRQL v23; // r10

  v1 = a1[4];
  v3 = *a1;
  v4 = *a1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    WPP_SF_qq(0x2Fu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
    v4 = *a1;
  }
  if ( v4 )
  {
    v5 = *(_QWORD *)(v1 + 152);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v5 )
      {
        v6 = *(void **)(v1 + 152);
        *(_BYTE *)(((unsigned __int64)*(unsigned int *)(v5 + 124) >> 3) + *(_QWORD *)(v3 + 4792)) &= ~(1 << (*(_BYTE *)(v5 + 124) & 7));
        ExFreePoolWithTag(v6, 0);
      }
    }
    else if ( v5 )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      v7 = *(__int64 **)(v3 + 4776);
      *(_DWORD *)(v3 + 1856) = 2887726;
      if ( v7 == (__int64 *)(v3 + 4776) )
      {
LABEL_13:
        v10 = (__int64 *)v7[1];
        v11 = *v10;
        if ( *(__int64 **)(*v10 + 8) != v10 )
          __fastfail(3u);
        *(_QWORD *)v5 = v11;
        *(_QWORD *)(v5 + 8) = v10;
        *(_QWORD *)(v11 + 8) = v5;
        *v10 = v5;
        ++*(_DWORD *)(v3 + 4768);
      }
      else
      {
        v8 = *(_DWORD *)(v5 + 124);
        while ( 1 )
        {
          v9 = *((_DWORD *)v7 + 31);
          if ( v9 == v8 )
            break;
          if ( v9 <= v8 )
          {
            v7 = (__int64 *)*v7;
            if ( v7 != (__int64 *)(v3 + 4776) )
              continue;
          }
          goto LABEL_13;
        }
      }
      v12 = *(_QWORD *)(v5 + 80);
      for ( i = *(__int64 **)(v12 + 928); i != (__int64 *)(v12 + 928); i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 27) > *(_DWORD *)(v5 + 124) )
          break;
      }
      v14 = (__int64 *)i[1];
      v15 = (_QWORD *)(v5 + 16);
      v16 = *v14;
      if ( *(__int64 **)(*v14 + 8) != v14 )
        __fastfail(3u);
      *(_QWORD *)(v5 + 24) = v14;
      *v15 = v16;
      *(_QWORD *)(v16 + 8) = v15;
      *v14 = (__int64)v15;
      ++*(_DWORD *)(v12 + 920);
      v17 = *(_QWORD *)(v5 + 88);
      for ( j = *(__int64 **)(v17 + 56); j != (__int64 *)(v17 + 56); j = (__int64 *)*j )
      {
        if ( *((_DWORD *)j + 23) > *(_DWORD *)(v5 + 124) )
          break;
      }
      v19 = (__int64 *)j[1];
      v20 = (_QWORD *)(v5 + 32);
      v21 = *v19;
      if ( *(__int64 **)(*v19 + 8) != v19 )
        __fastfail(3u);
      *v20 = v21;
      *(_QWORD *)(v5 + 40) = v19;
      *(_QWORD *)(v21 + 8) = v20;
      *v19 = (__int64)v20;
      ++*(_DWORD *)(v17 + 48);
      *(_DWORD *)(v17 + 96) += *(_DWORD *)(v5 + 648);
      v22 = *(_QWORD *)(v5 + 96);
      if ( (*(_DWORD *)(v5 + 64) & 2) != 0 )
        ndisIovAddVPortToVFList(v22, v5);
      else
        ndisIovAddVPortToPFList(v22, v5);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v23);
    }
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x30u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
}
