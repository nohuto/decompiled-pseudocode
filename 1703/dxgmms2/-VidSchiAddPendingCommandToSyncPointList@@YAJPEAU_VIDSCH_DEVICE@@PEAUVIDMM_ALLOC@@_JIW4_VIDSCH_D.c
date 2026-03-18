/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0010C6C
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00108F0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_VIDSCH_CONTEXT_ID_PAIR@@I@Z @ 0x1C0010E40 (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_V.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0012EF8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z @ 0x1C00288B0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z.c)
 *     Template_pxqPR2XR2 @ 0x1C0029024 (Template_pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v5; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rax
  unsigned int v13; // edx
  _QWORD *Elements; // r15
  _QWORD *v15; // rdx
  unsigned int v16; // esi
  _QWORD *i; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // r9
  PVOID v37; // [rsp+40h] [rbp-88h] BYREF
  char v38; // [rsp+48h] [rbp-80h] BYREF
  int v39; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  char v41; // [rsp+68h] [rbp-60h] BYREF
  int v42; // [rsp+78h] [rbp-50h]

  v5 = a4;
  if ( !a4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v25[7] = a5;
    v25[3] = 281LL;
    v25[4] = 3328LL;
    v25[5] = a1;
    v25[6] = a3;
    WdLogEvent5_WdCriticalError(v25);
    JUMPOUT(0x1C001D0B7LL);
  }
  v9 = (_QWORD *)a1[154];
  v10 = a1 + 153;
  if ( v9 != a1 + 153 && v9[2] == a3 )
  {
LABEL_16:
    if ( a5 )
    {
      if ( a5 != 3 )
        return 0LL;
      v21 = (_QWORD *)v9[12];
      v22 = (_QWORD *)(a2 + 216);
      v23 = v9 + 11;
      if ( (_QWORD *)*v21 != v23 )
        __fastfail(3u);
    }
    else
    {
      v21 = (_QWORD *)v9[10];
      v22 = (_QWORD *)(a2 + 200);
      v23 = v9 + 9;
      if ( (_QWORD *)*v21 != v23 )
        __fastfail(3u);
    }
    *v22 = v23;
    v22[1] = v21;
    *v21 = v22;
    v23[1] = v22;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x68536956u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 16) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v9[2] = a3;
    v9[10] = v9 + 9;
    v9[9] = v9 + 9;
    v9[12] = v9 + 11;
    v9[11] = v9 + 11;
    v12 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v12 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v12;
    *v12 = v9;
    v10[1] = v9;
    Elements = (_QWORD *)NonPagedPoolZeroedArray<_VIDSCH_CONTEXT_ID_PAIR,2,1953189969>::AllocateElements(
                           v9 + 3,
                           (unsigned int)v5);
    if ( Elements )
    {
      v15 = a1 + 8;
      v16 = 0;
      for ( i = (_QWORD *)a1[8]; i != v15; i = (_QWORD *)*i )
      {
        v19 = i - 3;
        v20 = i[18];
        if ( v20 > i[16] )
        {
          if ( v16 > (int)v5 - 1 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v15, v20);
            v26[3] = 281LL;
            v26[4] = 3328LL;
            v26[5] = v19[21];
            v26[6] = v19[19];
            v26[7] = v16;
            WdLogEvent5_WdCriticalError(v26);
            JUMPOUT(0x1C001D113LL);
          }
          v18 = 2LL * v16++;
          Elements[v18 + 1] = v20;
          Elements[v18] = v19;
        }
      }
      if ( bTracingEnabled )
      {
        v37 = 0LL;
        v39 = 0;
        P = 0LL;
        v42 = 0;
        v27 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&v37, (unsigned int)v5);
        v28 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&P, (unsigned int)v5);
        v31 = v28;
        if ( v27 && v28 )
        {
          if ( (_DWORD)v5 )
          {
            v32 = (_QWORD *)v28;
            v33 = v27 - v28;
            v34 = v5;
            do
            {
              v29 = *Elements;
              v30 = *(_QWORD *)(*Elements + 56LL);
              if ( !v30 || (*(_DWORD *)(v29 + 112) & 0x40) != 0 )
                v30 = *Elements;
              *(_QWORD *)((char *)v32 + v33) = v30;
              v35 = Elements[1];
              Elements += 2;
              *v32++ = v35;
              --v34;
            }
            while ( v34 );
          }
          v36 = a1[1];
          if ( !v36 )
            LODWORD(v36) = (_DWORD)a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_pxqPR2XR2(v31, v29, v30, v36, v9[2], v5, v27, v31);
        }
        if ( P != &v41 && P )
          ExFreePoolWithTag(P, 0);
        if ( v37 != &v38 && v37 )
          ExFreePoolWithTag(v37, 0);
      }
      goto LABEL_16;
    }
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v9, v13);
  }
  return 3221225495LL;
}
