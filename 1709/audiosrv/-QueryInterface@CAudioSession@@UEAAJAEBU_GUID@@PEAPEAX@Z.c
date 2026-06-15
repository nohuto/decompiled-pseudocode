/*
 * XREFs of ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001AF30
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036C70 (-QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036C80 (-QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036C90 (-QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036CA0 (-QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074F10 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A8C0 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAudioSession::QueryInterface(CAudioSession *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e13b3cde_f223_4043_8666_32b3f2df8ea1.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e13b3cde_f223_4043_8666_32b3f2df8ea1.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e13b3cde_f223_4043_8666_32b3f2df8ea1.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data4;
      if ( v5 )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_08460157_7ba0_4775_a5a3_97302f08c239.Data4;
        if ( v6 )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4;
          if ( v7 )
            return (unsigned int)CUnknown::QueryInterface((CAudioSession *)((char *)this + 32), a2, a3);
          a2 = (const struct _GUID *)((char *)this + 8);
        }
        else
        {
          a2 = (const struct _GUID *)((char *)this + 24);
        }
      }
      else
      {
        a2 = (const struct _GUID *)((char *)this + 16);
      }
      *a3 = (void *)((unsigned __int64)a2 & -(__int64)(this != 0LL));
      v8 = *(_QWORD *)this;
    }
    else
    {
      *a3 = this;
      v8 = *(_QWORD *)this;
    }
    (*(void (__fastcall **)(CAudioSession *, const struct _GUID *, void **, CAudioSession *))(v8 + 8))(
      this,
      a2,
      a3,
      this);
  }
  return v3;
}
