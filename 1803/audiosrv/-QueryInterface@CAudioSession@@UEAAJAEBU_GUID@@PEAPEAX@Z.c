/*
 * XREFs of ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800353E0
 * Callers:
 *     ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065890 (-QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800658A0 (-QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800658B0 (-QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800658C0 (-QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC600 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800600B0 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::QueryInterface(CAudioSession *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax

  if ( !a3 )
    return 2147500035LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a.Data4;
  if ( !v3 )
  {
    *a3 = this;
    (*(void (__fastcall **)(CAudioSession *, const struct _GUID *, void **, CAudioSession *))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      this);
    return 0LL;
  }
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data4;
  if ( !v4 )
  {
    if ( this )
    {
      v7 = (char *)this + 16;
      goto LABEL_16;
    }
LABEL_20:
    v7 = 0LL;
    goto LABEL_16;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_69319164_2df0_4e6b_88e7_2cd561a24381.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_69319164_2df0_4e6b_88e7_2cd561a24381.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_69319164_2df0_4e6b_88e7_2cd561a24381.Data4;
  if ( !v5 )
  {
    v7 = (char *)this + 24;
    if ( !this )
      v7 = 0LL;
    goto LABEL_16;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4;
  if ( !v6 )
  {
    if ( this )
    {
      v7 = (char *)this + 8;
LABEL_16:
      *a3 = v7;
      (*(void (__fastcall **)(CAudioSession *, const struct _GUID *, void **, CAudioSession *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        this);
      return 0LL;
    }
    goto LABEL_20;
  }
  return CUnknown::QueryInterface((CAudioSession *)((char *)this + 32), a2, a3);
}
