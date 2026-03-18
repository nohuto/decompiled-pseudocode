/*
 * XREFs of KseShimDriverIoCallbacks @ 0x1404B3890
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KsepPoolFreeNonPaged @ 0x14006D77C (KsepPoolFreeNonPaged.c)
 *     KsepLogInfo @ 0x14006D95C (KsepLogInfo.c)
 *     KsepPoolAllocateNonPaged @ 0x14015396C (KsepPoolAllocateNonPaged.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepDriverPathTail @ 0x1404B3830 (KsepDriverPathTail.c)
 *     KsepGetShimCallbacksForDriver @ 0x1404B3A9C (KsepGetShimCallbacksForDriver.c)
 *     KsepStringFree @ 0x1404B4E70 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x1404B4EA8 (KsepStringDuplicateUnicode.c)
 */

__int64 __fastcall KseShimDriverIoCallbacks(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int ShimCallbacksForDriver; // edi
  char *NonPaged; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int64 v15; // r8
  __int64 (__fastcall **v16)(__int64, IRP *); // rcx
  _BYTE *v17; // r9
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, IRP *); // rdx
  __int64 (__fastcall *v20)(__int64, IRP *); // r11
  __int64 v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  _BYTE v29[224]; // [rsp+68h] [rbp-A0h] BYREF

  v3 = a1[6];
  LODWORD(v22) = 0;
  v23 = 0LL;
  ShimCallbacksForDriver = 0;
  if ( a3 )
  {
    if ( dword_14036BC84 == 2 && (KseEngine & 1) == 0 )
    {
      ShimCallbacksForDriver = KsepStringDuplicateUnicode(&v22, a3);
      if ( ShimCallbacksForDriver >= 0 )
      {
        ShimCallbacksForDriver = KsepDriverPathTail((unsigned __int16 *)&v22, &v24);
        if ( ShimCallbacksForDriver >= 0 )
        {
          ShimCallbacksForDriver = KsepGetShimCallbacksForDriver(a1[3], &v25);
          if ( ShimCallbacksForDriver >= 0 )
          {
            NonPaged = (char *)KsepPoolAllocateNonPaged(0x100uLL);
            if ( NonPaged )
            {
              v8 = a1[11];
              if ( v8 )
              {
                v9 = v25;
                if ( v25 )
                {
                  *(_QWORD *)NonPaged = v8;
                  a1[11] = v9;
                }
              }
              v10 = a1[12];
              if ( v10 )
              {
                v21 = v26;
                if ( v26 )
                {
                  *((_QWORD *)NonPaged + 1) = v10;
                  a1[12] = v21;
                }
              }
              v11 = a1[13];
              if ( v11 )
              {
                v12 = v27;
                if ( v27 )
                {
                  *((_QWORD *)NonPaged + 2) = v11;
                  a1[13] = v12;
                }
              }
              v13 = *(_QWORD *)(v3 + 8);
              if ( v13 )
              {
                v14 = v28;
                if ( v28 )
                {
                  *((_QWORD *)NonPaged + 3) = v13;
                  *(_QWORD *)(v3 + 8) = v14;
                }
              }
              v15 = NonPaged - (char *)a1;
              v16 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
              v17 = (_BYTE *)(v29 - (_BYTE *)a1);
              v18 = 28LL;
              do
              {
                v19 = *v16;
                if ( *v16 )
                {
                  if ( v19 != IopInvalidDeviceRequest )
                  {
                    v20 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v16 + (_QWORD)v17 - 112);
                    if ( v20 )
                    {
                      *(__int64 (__fastcall **)(__int64, IRP *))((char *)v16 + v15 - 80) = v19;
                      *v16 = v20;
                    }
                  }
                }
                ++v16;
                --v18;
              }
              while ( v18 );
              *(_QWORD *)(v3 + 56) = NonPaged;
              ShimCallbacksForDriver = 0;
              KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524550LL;
              if ( (KsepDebugFlag & 1) != 0 )
                KsepDebugPrint(9LL, "KSE: Hooked callbacks for driver [%ws].\n", v23, v17, v22);
              KsepLogInfo(9LL, (__int64)"KSE: Hooked callbacks for driver [%ws].\n", v23, v17, v22);
              goto LABEL_8;
            }
            ShimCallbacksForDriver = -1073741801;
          }
        }
      }
      KsepPoolFreeNonPaged(0LL);
    }
LABEL_8:
    KsepStringFree(&v22);
    return (unsigned int)ShimCallbacksForDriver;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524436LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, "KSE: Callback shimming - missing driver object or driver name.\n");
  KsepLogInfo(0LL, (__int64)"KSE: Callback shimming - missing driver object or driver name.\n");
  return 3221225485LL;
}
