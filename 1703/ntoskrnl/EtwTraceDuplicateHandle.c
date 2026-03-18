/*
 * XREFs of EtwTraceDuplicateHandle @ 0x14070A7F8
 * Callers:
 *     ObInheritObjectHandle @ 0x14042BE2C (ObInheritObjectHandle.c)
 *     ObCompleteObjectDuplication @ 0x140516CFC (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x14017DA94 (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140254DD8 (EtwpTraceKernelEventWithFilter.c)
 */

void __fastcall EtwTraceDuplicateHandle(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r14
  int v10; // r12d
  unsigned int v11; // edi
  char *v12; // rax
  int v13; // ebx
  __int16 *v14; // rbp
  __int64 v15; // [rsp+30h] [rbp-88h] BYREF
  int v16; // [rsp+38h] [rbp-80h]
  int v17; // [rsp+3Ch] [rbp-7Ch]
  int v18; // [rsp+40h] [rbp-78h]
  __int16 v19; // [rsp+44h] [rbp-74h]
  int v20; // [rsp+46h] [rbp-72h]
  __int64 v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-58h]
  _QWORD v24[3]; // [rsp+68h] [rbp-50h] BYREF

  v7 = EtwpActiveSystemLoggers;
  v21 = a3;
  v8 = !_BitScanForward((unsigned int *)&v9, EtwpActiveSystemLoggers);
  v10 = *(_DWORD *)(a6 + 192);
  v11 = 0;
  v23 = a2;
  v22 = a1;
  if ( !v8 )
  {
    do
    {
      v7 &= v7 - 1;
      v12 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v9;
      if ( v12 )
      {
        if ( (*((_DWORD *)v12 + 4) & 0x40) != 0 )
        {
          v13 = 0;
          v14 = &EtwpObjectTypeFilter[10 * v9];
          if ( *v14 )
          {
            while ( !(unsigned int)ExCheckSingleFilter(v10, *(_DWORD *)&v14[2 * v13 + 2]) )
            {
              if ( ++v13 >= (unsigned int)(unsigned __int16)*v14 )
                goto LABEL_9;
            }
            v11 |= 1 << v9;
          }
        }
      }
LABEL_9:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v11 )
    {
      v15 = v21;
      v16 = v22;
      v17 = v23;
      v18 = a5;
      v19 = *(unsigned __int8 *)(a6 + 40);
      v24[0] = &v15;
      v20 = a4;
      v24[1] = 26LL;
      EtwpTraceKernelEventWithFilter((__int64)v24, 1u, v11, 0x1122u, 0x10501903u);
    }
  }
}
