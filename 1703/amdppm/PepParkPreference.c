/*
 * XREFs of PepParkPreference @ 0x1C000AC90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
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
  unsigned int v10; // esi
  int v11; // r8d
  __int64 v12; // r13
  unsigned int v13; // r14d
  __int64 v14; // rdx
  char *v15; // rdi
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v21[24]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE *v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  char v25; // [rsp+68h] [rbp-8h]

  result = (unsigned int)dword_1C0011910;
  if ( dword_1C0011910 >= (unsigned int)dword_1C00113E4 )
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
        memset(PepParkLists, 0, (unsigned int)(16 * v11));
        v12 = 0LL;
        v13 = 0;
        KeInitializeEnumerationContext(v21, a4);
        result = KeEnumerateNextProcessor(&v20, v21);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v13 >= v10 )
              break;
            v14 = v20;
            v15 = &PepParkLists[16 * v13];
            v12 = *(_QWORD *)(DevExts + 8LL * v20);
            *(_QWORD *)v15 = *(_QWORD *)(v12 + 1088);
            v15[9] = 0;
            if ( a5 && (unsigned int)KeCheckProcessorAffinityEx(a5, v14) )
            {
              v15[8] = 2;
              v16 = a3 - 1;
              if ( !a3 )
                v16 = 0;
              a3 = v16;
            }
            else
            {
              v15[8] = 0;
            }
            ++v13;
            result = KeEnumerateNextProcessor(&v20, v21);
          }
          while ( !(_DWORD)result );
          if ( v13 && v12 )
          {
            v25 = a1;
            v24 = a2;
            v22[0] = a3;
            v22[1] = v13;
            v23 = PepParkLists;
            v17 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C0011670)(*(_QWORD *)(v12 + 1088), v22);
            if ( v17 < 0 )
              return WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       3u,
                       2u,
                       0x11u,
                       (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids,
                       v17);
            v18 = 0;
            KeInitializeEnumerationContext(v21, a4);
            while ( 1 )
            {
              result = KeEnumerateNextProcessor(&v20, v21);
              if ( (_DWORD)result || v18 >= v10 )
                return result;
              if ( PepParkLists[16 * v18 + 9] == 1 )
              {
                v19 = a6;
              }
              else
              {
                if ( PepParkLists[16 * v18 + 9] != 2 )
                  goto LABEL_30;
                v19 = a7;
              }
              KeAddProcessorAffinityEx(v19, v20);
LABEL_30:
              ++v18;
            }
          }
        }
      }
    }
  }
  return result;
}
