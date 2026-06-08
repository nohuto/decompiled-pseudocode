/*
 * XREFs of PepParkPreference @ 0x1C0009300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 */

__int64 __fastcall PepParkPreference(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned int v10; // edi
  int v11; // r8d
  __int64 v12; // r13
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r15
  unsigned int v16; // eax
  char v17; // al
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v22[24]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  char v26; // [rsp+68h] [rbp-8h]

  result = (unsigned int)dword_1C0011940;
  if ( dword_1C0011940 >= (unsigned int)dword_1C0011414 )
  {
    result = KeCountSetBitsAffinityEx(a4);
    v10 = result;
    if ( (_DWORD)result )
    {
      result = a5 ? KeCountSetBitsAffinityEx(a5) : 0LL;
      if ( a3 > (unsigned int)result && a3 < v10 )
      {
        v11 = v10;
        if ( v10 < 4 )
          v11 = 4;
        memset(&PepParkLists, 0, (unsigned int)(16 * v11));
        v12 = 0LL;
        v13 = 0;
        KeInitializeEnumerationContext(v22, a4);
        result = KeEnumerateNextProcessor(&v21, v22);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v13 >= v10 )
              break;
            v14 = v21;
            v15 = 2LL * v13;
            v12 = *(_QWORD *)(DevExts + 8LL * v21);
            *((_QWORD *)&PepParkLists + v15) = *(_QWORD *)(v12 + 1088);
            *((_BYTE *)&PepParkLists + 8 * v15 + 9) = 0;
            if ( a5 && (unsigned int)KeCheckProcessorAffinityEx(a5, v14) )
            {
              v16 = a3 - 1;
              if ( !a3 )
                v16 = 0;
              a3 = v16;
              v17 = 2;
            }
            else
            {
              v17 = 0;
            }
            *((_BYTE *)&PepParkLists + 16 * v13++ + 8) = v17;
            result = KeEnumerateNextProcessor(&v21, v22);
          }
          while ( !(_DWORD)result );
          if ( v13 && v12 )
          {
            v26 = a1;
            v25 = a2;
            v23[0] = a3;
            v23[1] = v13;
            v24 = &PepParkLists;
            v18 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C00116A0)(*(_QWORD *)(v12 + 1088), v23);
            if ( v18 < 0 )
              return WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       3u,
                       2u,
                       0x11u,
                       (__int64)&WPP_03cea2f8b6a43217516e73b8caef141a_Traceguids,
                       v18);
            v19 = 0;
            KeInitializeEnumerationContext(v22, a4);
            while ( 1 )
            {
              result = KeEnumerateNextProcessor(&v21, v22);
              if ( (_DWORD)result || v19 >= v10 )
                return result;
              if ( *((_BYTE *)&PepParkLists + 16 * v19 + 9) == 1 )
              {
                v20 = a6;
              }
              else
              {
                if ( *((_BYTE *)&PepParkLists + 16 * v19 + 9) != 2 )
                  goto LABEL_30;
                v20 = a7;
              }
              KeAddProcessorAffinityEx(v20, v21);
LABEL_30:
              ++v19;
            }
          }
        }
      }
    }
  }
  return result;
}
